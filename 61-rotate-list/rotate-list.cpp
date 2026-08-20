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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)
            return head;
        int n=0;
        ListNode* R=head;
        while(R!=NULL){
            n++;
            R=R->next;
        } 
        k=k%n;
        while(k!=0){
            ListNode* temp=head;
            ListNode* last=head;
            ListNode* prev=NULL;
            while(last->next!=NULL){
                if(last->next->next==NULL){
                    prev=last;
                }
                last=last->next;
            }
            prev->next=NULL;
            last->next=temp;
            temp=last;
            head=last;
            k--;
        }
        return head;
    }
};