#include<bits/stdc++.h>

using namespace std;

enum Color
{
    red,
    green,
    blue
};
enum Size
{
    small,
    medium,
    big
};

class Toy
{
protected:
    double price;

public:
    Toy(double price)
    {
        this->price = price;
    }

    virtual void printType() = 0;
    virtual ~Toy() {};
    friend class ToyBox;
};

class CarToy : public Toy
{
private:
    Color color;

public:
    CarToy(double price, Color color) : Toy(price)
    {
        /*
         * STUDENT ANSWER
         */
        this->color = color;
    }

    void printType()
    {
        cout << "This is a car toy\n";
    }

    friend class ToyBox;
};

class PuzzleToy : public Toy
{
private:
    Size size;

public:
    PuzzleToy(double price, Size size) : Toy(price)
    {
        /*
         * STUDENT ANSWER
         */
        this->size = size;
    }

    void printType()
    {
        cout << "This is a puzzle toy\n";
    }

    friend class ToyBox;
};

class ToyBox
{
private:
    Toy* toyBox[5];
    int numberOfItems;

public:
    ToyBox()
    {
        /*
         * STUDENT ANSWER
         * TODO: set zero numberOfItems and nullptr toyBox
         */
        for(int i = 0; i < 5; i++) {
            toyBox[i] = NULL;
        }
        numberOfItems = 0;
    }
    
    int addItem(const CarToy& carToy)
    {
        /*
         * STUDENT ANSWER
         * TODO: function add a new Car toy to the box.
                 If successfully added, the function returns the current number of toys in the box. 
                 If the box is full, return -1.
         */
        if(numberOfItems < 5) {
            toyBox[numberOfItems] = new CarToy(carToy);
            numberOfItems++;
            return numberOfItems;
        }
        else return -1;

    }
    
    int addItem(const PuzzleToy& puzzleToy)
    {
        /*
         * STUDENT ANSWER
         * TODO: function add a new Puzzle toy to the box.
                 If successfully added, the function returns the current number of toys in the box. 
                 If the box is full, return -1.
         */
        if(numberOfItems < 5) {
            toyBox[numberOfItems] = new PuzzleToy(puzzleToy);
            numberOfItems++;
            return numberOfItems;
        }
        else return -1;
    }
    
    void printBox()
    {
        for (int i = 0; i < numberOfItems; i++) {
            toyBox[i]->printType();
        }
        // cout <<  numberOfItems << endl;   
    }
    ~ToyBox() {
        for(int i = 0; i < numberOfItems; i++) {
            delete toyBox[i];
        }
    }
};

int main() {
    CarToy car(20000,red);
    PuzzleToy puzzle(30000,small);
    //car.printType();
    //puzzle.printType();

    ToyBox box;
    box.addItem(car) ;
    box.addItem(puzzle);
    box.printBox();
    return 0;
}