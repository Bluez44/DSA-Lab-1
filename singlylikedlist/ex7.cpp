// template <class T>
// T SLinkedList<T>::removeAt(int index)
// {
//     /* Remove element at index and return removed value */
//     if(index < 0 || index >= count) return -1;
    
//     T data;
//     if(index == 0) {
//         Node* tmp = head;
//         data = tmp->data;
//         head = head->next;
//         delete tmp;
//         count--;
//         if(head == NULL) tail = NULL;
//     }
//     else {
//         Node* prev = head;
//         Node* tmp = head;
//         for(int i = 0; i < index-1; i++) {
//             prev = prev->next;   
//         }
//         tmp = prev->next;
//         prev->next = tmp->next;
//         data = tmp->data;
//         delete tmp;
//         if(prev->next == NULL) tail = prev;
//         count--;
//     }
//     return data;
// }

// template <class T>
// bool SLinkedList<T>::removeItem(const T& item)
// {
//     /* Remove the first apperance of item in list and return true, otherwise return false */
//     Node* tmp = head;
//     if(tmp->data == item) {
//         head = head->next;
//         tmp->next = NULL;
//         delete tmp;
//         count--;
//         if(head == NULL) tail = NULL;
//         return true;
//     }
//     for(int i = 0; i < count-1; i++) {
//         if(tmp->next->data == item) {
//             Node* to_delete = tmp->next;
//             tmp->next = to_delete->next;
//             to_delete->next = NULL;
//             delete to_delete;
//             if(tmp->next == NULL) tail = tmp;
//             count--;
//             return true;
//         }
//         tmp = tmp->next;
//     }
//     return false;
// }

// template<class T>
// void SLinkedList<T>::clear(){
//     /* Remove all elements in list */
//     Node* tmp = head;
//     while(tmp != NULL) {
//         head = head->next;
//         delete tmp;
//         tmp = head;
//     }
//     count = 0;
// }

