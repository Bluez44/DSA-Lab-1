#include<iostream>
#include<string.h>

int pow(int num, int n) {
    if(n == 0) return 1;
    else return num*pow(num,n-1);
}

int myArrayToInt(char* str, int n) {
    if(n > 0) {
        // std::cout << *str << " " << 10 << std::endl;
        return (*str-'0')*pow(10,n-1) + myArrayToInt(str+1, n-1);
    }
    else return 0;
}



int main() {
    char str[] = "2020";
    std::cout << myArrayToInt(str, 4);
}