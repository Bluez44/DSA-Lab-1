#include<bits/stdc++.h>
using namespace std;

template <class T>
class ArrayList {
protected:
    T* data;        // dynamic array to store the list's items
    int capacity;   // size of the dynamic array
    int count;      // number of items stored in the array
public:
    ArrayList(){capacity = 5; count = 0; data = new T[5];}
    ~ArrayList(){ delete[] data; }
    void    add(T e);
    void    add(int index, T e);
    int     size();
    void    ensureCapacity(int index);
    string toString() ;
    T       removeAt(int index);
    bool    removeItem(T item);
    void    clear();
};

template<class T>
string ArrayList<T>::toString() {
    string s = "";
    for(int i = 0; i < count; i++) {
        s += to_string(data[i]) + " ";
    }
    return s;
}

template<class T>
void ArrayList<T>::ensureCapacity(int cap){
    /* 
        if cap == capacity: 
            new_capacity = capacity * 1.5;
            create new array with new_capacity
        else: do nothing
    */
    if(cap == capacity) {
        capacity = capacity * 1.5;
        T* newdata = new T[capacity];
        for(int i = 0; i <= count; i++) {
            newdata[i] = data[i];
        }
        delete[] data;
        data = new T[capacity];
        for(int i = 0; i <= count; i++) {
            data[i] = newdata[i];
        }
        delete[] newdata;
    }
}

template <class T>
void ArrayList<T>::add(T e) {
    /* Insert an element into the end of the array. */
    ensureCapacity(count);
    // cout << count << " " << capacity << endl;
    data[count] = e; 
    // cout << data[count] << endl;
    count++;
}

template<class T>
void ArrayList<T>::add(int index, T e) {
    /* 
        Insert an element into the array at given index.
        if index is invalid:
            throw std::out_of_range("the input index is out of range!");
    */ 
    if(index<0 || index>capacity) {
        throw std::out_of_range("the input index is out of rage!");
    }
    if(count == 0) add(e);
    else {
        ensureCapacity(count+1);
        T* newdata = new T[capacity];
        for(int i = 0; i < count; i++) {
            newdata[i] = data[i];
        } 
        delete[] data;
        data = new T[capacity];
        // cout << capacity << endl;
        count++;
        for(int i = 0; i < count; i++) {
            if(i == index) data[i] = e;
            else if(i < index) data[i] = newdata[i];
            else data[i] = newdata[i-1];
        }
        delete[] newdata;
    }
    
}

template<class T>
int ArrayList<T>::size() {
    /* Return the length (size) of the array */ 
    return count;
}

template<class T>
T ArrayList<T>::removeAt(int index){
    /*
    Remove element at index and return removed value 
    if index is invalid:
        throw std::out_of_range("index is out of range");
    */
    if(index<0 || index>count) throw std::out_of_range("index is out of range");
    T* newdata = new T[capacity];
    for(int i = 0; i < count; i++) {newdata[i] = data[i];}
    delete[] data; count--;
    ensureCapacity(count);
    data = new T[capacity];
    for(int i = 0; i < count; i++) {
        if(i < index) data[i] = newdata[i];
        else data[i] = newdata[i+1];
    }
    T item = newdata[index];
    delete[] newdata;    
    return item;
}

template<class T>
bool ArrayList<T>::removeItem(T item){
     /* Remove the first apperance of item in array and return true, otherwise return false */
     for(int i = 0; i < count; i++) {
        if(data[i] == item) {
            removeAt(i);
            return true;
        }
     }
     return false;
}

template<class T>
void ArrayList<T>::clear(){
    /* 
        Delete array if array is not NULL
        Create new array with: size = 0, capacity = 5
    */
   if(data != NULL) delete[] data;
   count = 0;
   capacity = 5;
   data = new T[5];
}



int main() {
    ArrayList<int> arr;

    for (int i = 0; i < 10; ++i) {
        arr.add(i);
    }
    cout << arr.toString() << '\n';

    arr.removeItem(5);

    cout << arr.toString() << '\n';
    cout << arr.size();
return 0;
}