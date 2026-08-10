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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* prev=head;
        ListNode* front=head;
        ListNode* temp=head;

        vector<int>original;

        while(temp!=NULL){
            original.push_back(temp->val);
            temp=temp->next;
        }

        temp=head;
        temp=temp->next;
        prev->next=NULL;

        while(temp!=NULL){
            front=temp->next;
            temp->next=prev;

            prev=temp;
            temp=front;
        
        }

        temp=prev;

        int i=0;

        while(temp!=NULL){
            if(temp->val!=original[i]){
                
                return false;
            }
            temp=temp->next;
                i++;
        }
        return true;
    }
};