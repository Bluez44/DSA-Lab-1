#include<iostream>
#include<string>

bool isPalindrome(std::string str) 
{ 
    int l = str.length();
    if(l <= 1) return true;
    if(str[0] ==' ') return isPalindrome(str.substr(1,l-1));
    if(str[l-1] ==' ') return isPalindrome(str.substr(0,l-1));
    if(str[0] == str[l-1]) {
        std::string new_str = str.substr(1,l-2);
        return isPalindrome(new_str);
    }
    else return false;
}

int main() {
    std::cout << std::boolalpha << isPalindrome("do geese see god");
    return 0;
}