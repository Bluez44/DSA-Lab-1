// template<class T>
// T SLinkedList<T>::get(int index) {
//     /* Give the data of the element at given index in the list. */
//     if(index >= count || index < 0) return 0;
//     Node* tmp = head;
//     if(index == 0) return tmp->data;
//     for(int i = 0; i < index; i ++) {
//         tmp = tmp->next;
//     }
//     return tmp->data;
// }

// template <class T>
// void SLinkedList<T>::set(int index, const T& e) {
//     /* Assign new value for element at given index in the list */
//     if(index >= count || index < 0) return ;
//     Node* tmp = head;
//     if(index == 0) {
//         tmp->data = e;
//         return;
//     }
//     for(int i = 0; i < index; i ++) {
//         tmp = tmp->next;
//     }
//     tmp->data = e;
// }

// template<class T>
// bool SLinkedList<T>::empty() {
//     /* Check if the list is empty or not. */
//     if(head != NULL) return false;
//     return true;
// }

// template<class T>
// int SLinkedList<T>::indexOf(const T& item) {
//     /* Return the first index wheter item appears in list, otherwise return -1 */
//     Node* tmp = head;
//     for(int i = 0; i < count; i++) {
//         if(tmp->data == item) return i;
//         tmp = tmp->next;
//     }
//     return -1;
// }

// template<class T>
// bool SLinkedList<T>::contains(const T& item) {
//     /* Check if item appears in the list */
//     Node* tmp = head;
//     for(int i = 0; i < count; i++) {
//         if(tmp->data == item) return true;
//         tmp = tmp->next;
//     }
//     return false;
// }