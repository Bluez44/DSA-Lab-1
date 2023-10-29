#include<bits/stdc++.h>
using namespace std;
template <class T>
class SLinkedList
{
public:
    class Iterator; //forward declaration
    class Node;     //forward declaration
protected:
    Node *head;
    Node *tail;
    int count;
public:
    SLinkedList() : head(NULL), tail(NULL), count(0){};
    ~SLinkedList();
    void add(const T &e);
    void add(int index, const T &e);
    T removeAt(int index);
    bool removeItem(const T &removeItem);
    bool empty();
    int size();
    void clear();
    T get(int index);
    void set(int index, const T &e);
    int indexOf(const T &item);
    bool contains(const T &item);
    string toString();
    SLinkedList(const SLinkedList &list)
    {
        this->count = 0;
        this->head = NULL;
        this->tail = NULL;
    }
    Iterator begin()
    {
        return Iterator(this, true);
    }
    Iterator end()
    {
        return Iterator(this, false);
    }
public:
    class Node
    {
    private:
        T data;
        Node *next;
        friend class SLinkedList<T>;
    public:
        Node()
        {
            next = 0;
        }
        Node(Node *next)
        {
            this->next = next;
        }
        Node(T data, Node *next = NULL)
        {
            this->data = data;
            this->next = next;
        }
    };
    class Iterator
    {
    private:
        SLinkedList<T> *pList;
        Node *current;
        int index; // corresponding with current node
    public:
        Iterator();
        Iterator(SLinkedList<T> *pList, bool begin);
        Iterator &operator=(const Iterator &iterator);
        void set(const T &e);
        T &operator*();
        bool operator!=(const Iterator &iterator);
        
        // Prefix ++ overload
        Iterator &operator++();
        
        // Postfix ++ overload
        Iterator operator++(int);
    };
};

class Polynomial;
class Term {
private:
    double coeff;   
    int exp;
    friend class Polynomial;
public:
    Term(double coeff = 0.0, int exp = 0) {
        this->coeff = coeff;
        this->exp = exp;
    }
    bool operator==(const Term& rhs) const {
        return this->coeff == rhs.coeff && this->exp == rhs.exp;
    }
    friend ostream & operator<<(ostream &os, const Term& term) {
        cout << endl;
        cout << "Term: " << "(" << term.coeff << " " << term.exp << ")";
        return os;
    }
};
class Polynomial {
private:
    SLinkedList<Term>* terms;
public:
    Polynomial() {
        this->terms = new SLinkedList<Term>();
    }
    ~Polynomial() {
        this->terms->clear();
    }
    void insertTerm(const Term& term);
    void insertTerm(double coeff, int exp);
    void print() {
        SLinkedList<Term>::Iterator it;
        cout << "[";
        for (it = this->terms->begin(); it != this->terms->end(); it++) {
            cout << (*it);
        }
        cout << endl << "]";
    }
};

void Polynomial::insertTerm(const Term& term) {
    // STUDENT ANSWER
    SLinkedList<Term>::Iterator it;
    
    // cout << "[";
    //     for (it = this->terms->begin(); it != this->terms->end(); it++) {
    //         cout << (*it);
    //     }
    //     cout << endl << "]" << endl << endl;
        
    if(term.coeff == 0) return;
    for(it = this->terms->begin(); it != this->terms->end(); it++) {
        if((*it).exp == term.exp) {
            (*it).coeff += term.coeff;
            if((*it).coeff == 0) terms->removeAt(terms->indexOf((*it)));
            return;
        }
    }
    if(terms->size() == 0) {
        terms->add(0);
        terms->set(0,term);
    }
    else {
        for(it = this->terms->begin(); it != this->terms->end(); it++) {
            if(term.exp > (*it).exp) {
                // cout << "term < it\n" << term.coeff << " " << term.exp << endl;
                // cout << terms->indexOf((*it)) << endl;
                terms->add(terms->indexOf((*it)),0);  
                terms->set(terms->indexOf((*it))-1,term);       
                return; 
            }  
        }
        // cout << "Need to add new term at the end\n";
        terms->add(terms->size(),0);
        terms->set(terms->size()-1,term);
    }
    
}

void Polynomial::insertTerm(double coeff, int exp) {
    // STUDENT ANSWER
    Term term(coeff,exp);
    insertTerm(term);
}

int main() {
    Polynomial *poly = new Polynomial();
    poly->insertTerm(6.0, 2);
    poly->insertTerm(4.0, 5);
    poly->insertTerm(4.0, 3);
    poly->insertTerm(6.0, 5);
    poly->insertTerm(-1.0, 0);
    poly->insertTerm(-6.0, 6);
    poly->insertTerm(6.0, 6);
    poly->print();
    return 0;
}