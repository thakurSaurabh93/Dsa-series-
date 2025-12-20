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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* start = head;
        int count = 1;
        vector<int> arr;
        while(count < left){
            start = start->next;
            count++;
        }
        ListNode* temp = start;
        while(count <= right){
            arr.push_back(temp->val);
            count++;
            temp = temp->next;
        }
        reverse(arr.begin(), arr.end());
        int i = 0;
        while(start != temp){
            start->val = arr[i++];
            start = start->next;
        }
        return head;
    }
};