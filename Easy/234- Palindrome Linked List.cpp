/*

Author : Zishan Khan
Problem : Palindrome Linked List
Difficulty : Easy
Problem Link : https://leetcode.com/problems/palindrome-linked-list/description/?envType=daily-question&envId=2024-03-22

*/

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
    bool isPalindrome(ListNode* head) {
         if(head == NULL || head->next == NULL){
            return (head);
        }
        ListNode *r_head = NULL;
        ListNode *ptr = head;
        while(ptr!=NULL){
            ListNode *temp = new ListNode(ptr->val);
            temp ->next = r_head;
            r_head = temp;
            ptr = ptr->next;
        }
        while(head && r_head){
            if(head->val != r_head->val){
                return false;
            }
            head = head->next;
            r_head = r_head->next;
        }
        return true;
    }
};