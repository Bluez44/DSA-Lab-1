#include<bits/stdc++.h>

using namespace std;

class Character {
protected:
    int hp;
    int x;
    int y;
public:
    Character() {
        // STUDENT ANSWER
        hp = x = y = 0;
    }

    Character(int hp, int x, int y) {
        // STUDENT ANSWER
        this->hp = hp;
        this->x = x;
        this->y = y;
    }

    int getHp() {
        // STUDENT ANSWER
        return this->hp;
    }

    void setHp(int hp) {
        // STUDENT ANSWER
        this->hp = hp;
    }

    int getX() {
        // STUDENT ANSWER
        return this->x;
    }

    void setX(int x) {
        // STUDENT ANSWER
        this->x = x;
    }

    int getY() {
        // STUDENT ANSWER
        return this->y;
    }

    void setY(int y) {
        // STUDENT ANSWER
        this->y = y;
    }

    int getManhattanDistTo(Character* other) {
        // STUDENT ANSWER
        int a = (this->x > other->getX())? this->x - other->getX() : other->getX() - this->x;
        int b = (this->y > other->getY())? this->y - other->getY() : other->getY() - this->y;
        return a + b;
    }
};  

int main() {
    Character ch1(100, 3, 6);
cout << ch1.getHp() << " " << ch1.getX() << " " << ch1.getY();
return 0;
}