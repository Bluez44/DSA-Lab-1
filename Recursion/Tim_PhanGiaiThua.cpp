#include<iostream>

// int helper(int n, int i) {
//     if(n%i == 0) {
//         if(n/i>1) {
//             n = n/i; i++;
//             return helper(n,i);
//         }
//         else return n;
//     }
//     else return -1;
// }

// int find_Factorial (int n) {
//     if(n==1 || n==0) return 1;
//     else if(n<0) return -1;
//     else {
//         int i = 2;
//         return helper(n, i);
//     }
// }
int i = 2;
int find_Factorial(int n) {
    if(n == 0 || n == 1) return 1;
    else if(n < 0 || n%i) return -1;
    else if(n%i==0 && n/i>2) {
        n/=i; i++;
        return find_Factorial(n);
    }
    else return n;
}

int main() {
    std::cout << find_Factorial(121);
    return 0;
}