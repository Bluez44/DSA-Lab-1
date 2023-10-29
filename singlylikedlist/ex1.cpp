#include<bits/stdc++.h>
using namespace std;

    // LLNode* addLinkedList(LLNode* l0, LLNode* l1) {
    //     // STUDENT ANSWER
    //     if(l0 == NULL && l1 == NULL) return NULL;
    //     int carry = 0;
    //     LLNode* sum_list = new LLNode();
    //     LLNode* head = sum_list;
    //     while(1) {
    //         int sum = carry;
            
    //         if(l0 != NULL) {
    //             sum += l0->val;
    //             l0 = l0->next;
    //         }
            
    //         if(l1 != NULL) {
    //             sum += l1->val;
    //             l1 = l1->next;
    //         }
            
    //         carry = sum/10;
    //         sum %= 10;
            
    //         sum_list->val = sum;
    //         if(l0 == NULL && l1 == NULL && carry == 0) break;
    //         sum_list->next = new LLNode();
    //         sum_list = sum_list->next;
    //     }
    //     return head;
    // }

int main() {

    int arr[3] ;
    arr[0] = 1; arr[1] = 2; arr[2] = 3;
    cout << sizeof(arr) / sizeof(int);
    return 0;
}

