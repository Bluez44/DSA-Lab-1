#include<iostream>

int findMax(int* arr, int length) {
    if(length == 1) return *arr;
    int x = findMax(arr, length-1);
    if(arr[length-1] < x) return x;
    else return arr[length-1];
}

int main() {
    int arr[] = {10, 5, 7, 9, 15, 6, 11, 8, 12, 2};
    std::cout << findMax(arr, 10);
    return 0;
}