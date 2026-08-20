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
ListNode* findkth(ListNode* temp, int k) {
    k--;

    while (temp != nullptr && k > 0) {
        temp = temp->next;
        k--;
    }

    return temp;
}
ListNode* reverse(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;

    while (curr != nullptr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* nextNode;
        ListNode* prev = nullptr;

        while(temp!=NULL){
            ListNode* kth=findkth(temp,k);
            if (kth == nullptr) {
                if (prev != nullptr)
                    prev->next = temp;
                break;
            }
            nextNode=kth->next;
            kth->next=NULL;
            
            reverse(temp);

            if(temp==head){
                head=kth;
            }
            else{
                prev->next=kth;
            }
            prev=temp;
            temp=nextNode;
        }
        return head;
    }
};