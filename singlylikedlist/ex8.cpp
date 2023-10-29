// Class LLNode representing a node of singly linked lists is declared as below:

// class LLNode {
// public:
//     int val;
//     LLNode* next;
//     LLNode(); // Constructor: val = 0, next = nullptr
//     LLNode(int val, LLNode* next); // Constructor with customized data
// }

// Given a singly linked list head node.
// Your task is to implement a function with following prototype:
// LLNode* reverseLinkedList(LLNode* head);
// The function returns head node of the reversed singly linked list.


//                 ANSWER
// LLNode* reverseLinkedList(LLNode* head) {
//     // STUDENT ANSWER
//     if(head == NULL) return NULL;
//     LLNode* tmp = head;
//     LLNode* prev = head;
//     LLNode* newhead;
//     int count = 0;
//     while(tmp->next != NULL) {
//         tmp = tmp->next;
//         count++;
//     }
//     newhead = tmp; //cout << newhead->val << " " << count << endl;
//     while(count > 0) {
//         while(prev->next != tmp) {prev = prev->next;}
//         tmp->next = prev;
//         prev->next = NULL;
//         tmp = prev; prev = head;
//         count--;
//     }
//     return newhead;
// }
#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << 11%10;
    return 0;
}