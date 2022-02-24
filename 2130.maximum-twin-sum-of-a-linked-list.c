/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// Iteratively Reverse the ListNode.
struct LIstNode* reverse(struct ListNode *list) {
    struct ListNode *prev = NULL;
    struct ListNode *next = NULL;
    struct ListNode *curr = list;
    
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    return prev;
}

int pairSum(struct ListNode* head) {
    
    if (head == NULL) {
        return 0;
    }
    
    // Divide the ListNode into two halves.
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    struct ListNode *track = NULL;
    
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        track = slow;
        slow = slow->next;
    }
    
    track->next = NULL;
    
    // Reverse the middle-to-end half.
    struct ListNode *reverseHalf = reverse(slow);
    
    // Moving both pointers forward, and do the comparison.
    int max = 0;
    while(head != NULL) {
        int curr = head->val + reverseHalf->val;
        max = (max > curr) ? max : curr;
        head = head->next;
        reverseHalf = reverseHalf->next;
    }
    
    return max;
}
