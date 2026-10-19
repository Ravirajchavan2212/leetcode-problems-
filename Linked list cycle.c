/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *q = head;
    struct ListNode *pos = head;

    while (q != NULL && q->next != NULL) {
        pos = pos->next;
        q = q->next->next;

        if (q == pos) {
            return true;
        }
    }

    return false;
}
