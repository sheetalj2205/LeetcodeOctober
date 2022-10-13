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
    void deleteNode(ListNode* node) {
        //create a simple node
        ListNode* temp;
        //store node->next in temp first
        temp = node->next;
        //then store temp->val in node
        node->val = temp->val;
        //in node->next store temp in next
        node->next = temp->next;
        //delete temp
        delete (temp);
    }
};