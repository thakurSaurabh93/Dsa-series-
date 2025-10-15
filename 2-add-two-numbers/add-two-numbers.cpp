/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL&&l2!=NULL){
             return l2;
        }
        if(l1!=NULL && l2==NULL){
            return l1;
        }
       ListNode* node1=new ListNode(-1);
       ListNode* temp=node1;
       ListNode* curr=node1;
       ListNode* h1=l1;
       ListNode*h2=l2;
       int sum;
       int carry=0;
       while(h1!=NULL && h2!=NULL){
          sum=0;
          sum+=h1->val+h2->val+carry;
          if(sum>9){
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            carry=sum/10;
          }
          else{
            temp->next=new ListNode(sum);
            temp=temp->next;
            carry=0;
          }
          h1=h1->next;
          h2=h2->next;
       }

       while(h1!=NULL){
        sum=0;
        sum+=h1->val+carry;
        if(sum>9){
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            carry=sum/10;
          }
          else{
            temp->next=new ListNode(sum);
            temp=temp->next;
            carry=0;
          }
          h1=h1->next;
       }
       while(h2!=NULL){
          sum=0;
        sum+=h2->val+carry;
        if(sum>9){
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            carry=sum/10;
          }
          else{
            temp->next=new ListNode(sum);
            temp=temp->next;
            carry=0;
          }
          h2=h2->next;
       }
       if(carry!=0){
        temp->next=new ListNode(carry);
            temp=temp->next;
       }
       return curr->next;
    }
};