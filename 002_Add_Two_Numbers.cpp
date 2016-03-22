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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l_resutl = new ListNode(0);
        ListNode* p_cur =  l_resutl;
        int flag = 0;
        while (l1 || l2) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + flag;
            p_cur->val = sum % 10;
            flag = (sum - p_cur->val) / 10;
            if (l1) {
                l1 = l1->next;
            }
            if (l2) {
                l2 = l2->next;
            }
            if (l1 || l2) {
                p_cur->next = new ListNode(0);
                p_cur = p_cur->next;
            }
        }
        if (flag > 0) {
            p_cur->next = new ListNode(flag);
        }
        
        return l_resutl;
    }
};
