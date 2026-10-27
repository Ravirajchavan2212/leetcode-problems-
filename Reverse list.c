/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *p,*q,*r;
   
   p=NULL;
   q=head;
   r;
   if(head==NULL){
       return NULL;
   }
   while(q!=NULL){
       r=q->next;
       q->next=p;
       p=q;
       q=r;
   }
   return p;
}
