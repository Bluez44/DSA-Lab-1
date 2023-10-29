// #include<bits/stdc++.h>
// using namespace std;

// Class LLNode representing a node of singly linked lists is declared as below:
// class LLNode {
// public:
//     int val;
//     LLNode* next;
//     LLNode(); // Constructor: val = 0, next = nullptr
//     LLNode(int val, LLNode* next); // Constructor with customized data
// }
// Given a singly linked list head node and a integer k.
// Your task is to implement a function with following prototype:
// LLNode* rotateLinkedList(LLNode* head, int k);
// The function returns head node of the rotated singly linked list obtained after rotate the linked list to the right by k places.

//             ANSWER
// LLNode* rotateLinkedList(LLNode* head, int k) {
//     if (head == nullptr || k == 0) {
//         return head;
//     }

//     int length = 0;
//     LLNode* current = head;
//     LLNode* tail = nullptr;

//     while (current != nullptr) {
//         length++;
//         if (current->next == nullptr) {
//             tail = current;
//         }
//         current = current->next;
//     }

//     int rotationIndex = k % length;

//     if (rotationIndex == 0) {
//         return head;
//     }

//     current = head;
//     for (int i = 0; i < length - rotationIndex - 1; i++) {
//         current = current->next;
//     }

//     LLNode* newHead = current->next;
//     current->next = nullptr;
//     tail->next = head;

//     return newHead;
// }
