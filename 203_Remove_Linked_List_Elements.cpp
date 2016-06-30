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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* cur = head;
    	ListNode* last = NULL;
    	while (cur) {
    		ListNode* next = cur->next;
    		if (cur->val == val) {
    			if (last) {
    				last->next = cur->next;
    			} else {
    				head = cur->next;
    			}
    		} else {
    			last = cur;
    		}
    		cur = cur->next;
    	}
    	return head;
    }
};
