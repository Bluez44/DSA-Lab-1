#include<iostream>

void printPattern(int n) {
    if(n <= 0) {
        std::cout << n ; return;
    }
    std::cout << n << " ";
    printPattern(n-5);
    std::cout << " " << n;
}

int main() {
    printPattern(14);
    return 0;
}