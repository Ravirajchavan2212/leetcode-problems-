/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p ,*q;
    if(headA==NULL || headB==NULL){
        return NULL;
    }
 p=headA;
 q=headB;
    while(p!=q){
        if(p==NULL){
            p=headB;
            
        }
        else{
            p=p->next;
        }
        
        if(q==NULL){
            q=headA;
        }
        else{
            q=q->next;
        }
    }
    return p;
}
