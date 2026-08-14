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
    void reorderList(ListNode* head) {
        vector<ListNode*> arr;
        ListNode* current=head;
        while(current!=nullptr){
            arr.push_back(current);
            current=current->next;
        }
        //ListNode* final=new ListNode(0);
        current=new ListNode(0);;
        int low=0,high=arr.size()-1;
        while(low<=high){
            if(low==high){
                current->next=arr[low];
                current=current->next;
                high--;
                low++;
            }
            else{
                current->next=arr[low];
                current->next->next=arr[high];
                low++;
                high--;
                current=current->next->next;
            }
        }
        current->next=nullptr;
        //head=final->next;
    }
};