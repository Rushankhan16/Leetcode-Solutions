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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) return NULL;

        ListNode* temp=head;
        int cnt=0;

        while(temp!=NULL){
            cnt++;
            temp=temp->next;
            
        }

         if (cnt == n) {
            ListNode* delNode = head;
            head = head->next;
            delete delNode;
            return head;
        }

        temp=head;
        
        for(int i=1; i<cnt-n; i++){
            temp=temp->next;
        }
        
        ListNode* delNode=temp->next;
        temp->next=temp->next->next;
        delete delNode;
        
        return head;
    }
};