#include <iostream>

// Singly-linked lists are already defined with this interface:
template<typename T>
struct ListNode {
  ListNode(const T &v) : value(v), next(nullptr) {}
  T value;
  ListNode *next;
};

ListNode<int>* reverseList(ListNode<int>* head) {
    ListNode<int>* prev = nullptr;
    ListNode<int>* curr = head;
    while (curr != nullptr) {
        ListNode<int>* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}

ListNode<int>* solution(ListNode<int>* a, ListNode<int>* b) {
    ListNode<int>* rev_a = reverseList(a);
    ListNode<int>* rev_b = reverseList(b);
    
    ListNode<int>* dummy = new ListNode<int>(0);
    ListNode<int>* current = dummy;
    
    int carry = 0;
    const int BASE = 10000;
    
    while (rev_a != nullptr || rev_b != nullptr || carry !=0) {
        int val_a = (rev_a != nullptr) ? rev_a->value : 0;
        int val_b = (rev_b != nullptr) ? rev_b->value : 0;
        
        int sum = val_a + val_b + carry;
        int node_val = sum % BASE;
        carry = sum / BASE;
        current->next = new ListNode<int>(node_val);
        current = current->next;
        
        if(rev_a != nullptr) 
            rev_a = rev_a->next;
        if(rev_b != nullptr)
            rev_b = rev_b->next;
    }
    ListNode<int>* result_reverse = dummy->next;
    delete dummy;
    ListNode<int>* final_result = reverseList(result_reverse);
    
    if (final_result == nullptr){
        return new ListNode<int>(0);
    }
    
    return final_result;
}
