#include<bits/stdc++.h>
using namespace std;

int buyCar(int* nums, int length, int k) {
    if(length == 0) return 0;
    sort(nums, nums+length);
    int count = 0;
    for(int i = 0; i < length ; i++) {
        count += nums[i];
        if(count > k) return i; 
    }
    return length;
}

int main() {
    int nums[] = {20,30,50,50};
int length = sizeof(nums)/sizeof(nums[0]);
cout << buyCar(nums, length,900) << "\n";
}