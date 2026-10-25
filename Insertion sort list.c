/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* insertionSortList(struct ListNode* head) {
    struct ListNode *p, *q, *prev, *nextNode;

    if (head == NULL || head->next == NULL)
        return head;

    p = head->next;
    prev = head;

    while (p != NULL) {
        nextNode = p->next;
        q = head;

        if (q->val > p->val) {
            prev->next = nextNode;
            p->next = head;
            head = p;
        } else {
            while (q != prev && q->next->val < p->val) {
                q = q->next;
            }

            if (q != prev) {
                prev->next = nextNode;
                p->next = q->next;
                q->next = p;
            } else {
                prev = p;
            }
        }

        p = nextNode;
    }

    return head;
}
