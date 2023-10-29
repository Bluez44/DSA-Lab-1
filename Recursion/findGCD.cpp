#include<iostream>

int findGCD(int a, int b) {
    if(b > a) return findGCD(b,a);
    if(b==0) return a;
    else return findGCD(b,a%b);
}

int main() {
    std::cout << findGCD(124,32);
    return 0;
}