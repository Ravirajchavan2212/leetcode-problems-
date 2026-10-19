/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *p = head;
    struct ListNode *q = head;

    for (int i = 0; i < n; i++) {
        q = q->next;
    }

    if (q == NULL) {
        struct ListNode *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    while (q->next != NULL) {
        p = p->next;
        q = q->next;
    }

    struct ListNode *temp = p->next;
    p->next = temp->next;
    free(temp);

    return head;
}
 
