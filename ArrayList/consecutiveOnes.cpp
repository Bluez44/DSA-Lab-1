#include<bits/stdc++.h>
using namespace std;

bool consecutiveOnes(vector<int>& nums) {
    // STUDENT ANSWER
    bool flag = false;
    int l = nums.size(); if(l == 0) return true;
    if(l == 1) return false;
    for(int i = 1; i < l; i++) {
        if(nums.at(i)==1 && nums.at(i-1)==1) {
            flag = true;
        }
        else if(nums.at(i)==1 && nums.at(i-1)!=1) {
            if(i==l-1) flag = false;
            else if(nums.at(i+1) == 1) {
                flag = true;
            }
            else flag = false;
        }        
    }
    return flag;
}

int main() {
    vector<int> nums {2,3,4,5,6,7,8};
    cout << consecutiveOnes(nums);
return 0;
}