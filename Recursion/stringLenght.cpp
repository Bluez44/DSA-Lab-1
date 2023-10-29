#include<iostream>
#include<bits/c++io.h>

int strLen(char* str){
    if(*str == '\0') return 0;
    else return 1 + strLen(str + 1);
}

int main () {
    char str[] = "Truong DH Bach Khoa";
    std::cout << strLen(str);
    return 0;
}
