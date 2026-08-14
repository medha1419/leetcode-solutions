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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* current1=list1;
        ListNode* current2=list2;
        ListNode* final=new ListNode(0);
        ListNode* current=final;
        while(current1!=nullptr && current2!=nullptr){
            if(current1->val<=current2->val){
                current->next=current1;
                current=current->next;
                current1=current1->next;
            }
            else{
                current->next=current2;
                current=current->next;
                current2=current2->next;
            }
        }
        while(current1!=nullptr){
            current->next=current1;
            current=current->next;
            current1=current1->next;
        }
        while(current2!=nullptr){
            current->next=current2;
            current=current->next;
            current2=current2->next;
        }
        return final->next;
    }
};