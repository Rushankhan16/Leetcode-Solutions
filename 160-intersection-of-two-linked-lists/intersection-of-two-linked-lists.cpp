/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        int cntA=0;
        int cntB=0;
        while(tempA!=NULL){
            cntA++;
            tempA=tempA->next;
        }
        while(tempB!=NULL){
            cntB++;
            tempB=tempB->next;
        }
        if(cntA>cntB){
            tempA=headA;
            tempB=headB;
            int i=cntA-cntB;
            while(i!=0){
                tempA=tempA->next;
                i--;
            }
        }
        else{
            tempA=headA;
            tempB=headB;
            int i=cntB-cntA;
            while(i!=0){
                tempB=tempB->next;
                i--;
            }            
        }
        while(tempA!=NULL || tempB!=NULL){
            if(tempA==tempB){
                return tempA;
            }
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return NULL;
    }
};