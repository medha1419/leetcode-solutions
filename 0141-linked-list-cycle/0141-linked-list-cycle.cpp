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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> mp;
        ListNode* current=head;
        while(current!=nullptr){
            if(mp.count(current)){
                return true;
            }
            mp.insert(current);
            current=current->next;
        }
        return false;
    }
};