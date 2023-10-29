// void LinkedList::partition(int k) {
//     if(head == NULL || head == tail) return;
//     Node* tmp = head;
//     Node* smaller_head = NULL, *smaller_tail = NULL;
//     Node* equal_head = NULL, *equal_tail = NULL;
//     Node* greater_head = NULL, *greater_tail = NULL;
    
//     while(tmp != NULL) {
//         Node* next = tmp->next;
//         tmp->next = NULL;
        
//         if(tmp->value < k) {
//             if(smaller_head == NULL) {
//                 smaller_head = smaller_tail = tmp;
//             }
//             else {
//                 smaller_tail->next = tmp; 
//                 smaller_tail = smaller_tail->next;
//             }
//         }
        
//         else if(tmp->value == k) {
//             if(equal_head == NULL) {
//                 equal_head = equal_tail = tmp;
//             }
//             else {
//                 equal_tail->next = tmp; 
//                 equal_tail = equal_tail->next;
//             }
//         }
//         else if(tmp->value > k) {
//             if(greater_head == NULL) {
//                 greater_head = greater_tail = tmp;
//             }
//             else {
//                 greater_tail->next = tmp; 
//                 greater_tail = greater_tail->next;
//             }
//         }
        
//         tmp = next;
//     }
    
//     if(smaller_head != NULL) {
//         head = smaller_head;
        
//         if(equal_head != NULL) {
//             smaller_tail->next = equal_head;
//             if(greater_head != NULL) {
//                 equal_tail->next = greater_head;
//                 tail = greater_tail;
//             }
//             else tail = equal_tail;
//         }
        
//         else if(greater_head != NULL) {
//             smaller_tail->next = greater_head;
//             tail = greater_tail;
//         }
        
//         else tail = smaller_tail;
//     }
    
//     else if(equal_head != NULL) {
//         head = equal_head;
//         if(greater_head != NULL) {
//             equal_tail->next = greater_head;
//             tail = greater_tail;
//         }
//         else tail = equal_tail;
//     }
    
//     else if(greater_head != NULL) {
//         head = greater_head;
//         tail = greater_tail;
//     }
//     else head = tail = NULL;
// }