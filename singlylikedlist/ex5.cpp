// template <class T>
// void SLinkedList<T>::add(const T& e) {
//     /* Insert an element into the end of the list. */
//     Node* newnode = new Node(e,NULL);
//     if(count == 0) {
//         head = tail = newnode;
//         count++;
//     }
//     else {
//         tail->next = newnode;
//         tail = tail->next;
//         count++;
//     }
// }

// template<class T>
// void SLinkedList<T>::add(int index, const T& e) {
//     /* Insert an element into the list at given index. */ 
//     if(index < 0 ) throw "Index is out of range";
//     if(count == 0 || index == count) return add(e);
//     if(index == 0) {
//         Node* newnode = new Node(e,NULL);
//         newnode->next = head;
//         head = newnode;
//         count++;
//         return;
//     }
//     Node* newnode = new Node(e, NULL);
//     Node* prev = head;
//     for(int i = 0; i < index - 1; i++) {
//         prev = prev->next;
//             // newnode->next = prev->next;
//             // prev = newnode->next;
//             // count++;
//     }
//     newnode->next = prev->next;
//     prev->next = newnode;
//     count++;
// }

// template<class T>
// int SLinkedList<T>::size() {
//     /* Return the length (size) of list */ 
//     return count;
// }
