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

//시간복잡도:O(N)
//공간복잡도:O(1)
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head)return NULL; 
       
        ListNode* dummy_node=new ListNode(-101 , head);
        ListNode* prev = dummy_node;
        ListNode* cur = head;
        ListNode* next = cur->next;

        while (cur) {
            if (cur && next && cur->val == next->val) {
                while (next && cur->val == next->val) {
                    next = next->next;
                }
                prev->next = next;
                cur = next;
                next = next ? next->next : NULL;
            }else{
                prev = cur;
                cur = next;
                next = next ? next->next : NULL;
            }
        }
        return dummy_node->next;

    };
};
