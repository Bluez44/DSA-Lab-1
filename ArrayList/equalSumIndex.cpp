#include<bits/stdc++.h>
using namespace std;

int equalSumIndex(vector<int>& nums) {
    // STUDENT ANSWER
    int n = nums.size();
    int totalSum = 0;
    
    for (int i = 0; i < n; i++) {
        totalSum += nums[i];
    }
    
    int leftSum = 0;
    
    for (int i = 0; i < n; i++) {
        totalSum -= nums[i];
        
        if (leftSum == totalSum) {
            return i;
        }
        
        leftSum += nums[i];
    }
    return -1;
}

int main() {
    vector<int> nums {3, 5, 2, 7, 6, 4};
cout << equalSumIndex(nums);
return 0;
}