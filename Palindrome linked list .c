/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool isPalindrome(struct ListNode* head) {
    struct ListNode *p, *q, *prev, *next;

    p = head;
    q = head;

    
    while (q != NULL && q->next != NULL) {
        p = p->next;
        q = q->next->next;
    }

    
    prev = NULL;
    q = p;

    while (q != NULL) {
        next = q->next;
        q->next = prev;
        prev = q;
        q = next;
    }

    
    p = head;
    q = prev;

    while (q != NULL) {
        if (p->val != q->val) {
            return false;
        }
        p = p->next;
        q = q->next;
    }

    return true;
}
