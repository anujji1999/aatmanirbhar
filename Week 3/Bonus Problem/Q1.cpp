// Leetcode 2. Add Two Numbers
// https://leetcode.com/problems/add-two-numbers/

#include<bits/stdc++.h>
using namespace std;

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(0);
        ListNode* tempAns = ans;
        int carry = 0;

        while(l1 != NULL && l2 != NULL){
            int temp = l1->val + l2->val + carry;
            carry = 0;
            if(temp > 9){
                carry = temp / 10;
                temp = temp % 10;
            }
            ans->next = new ListNode(temp);
            ans = ans->next;
            l1 = l1->next;
            l2 = l2->next;
        }

        while(l1 != NULL){
            int temp = l1->val + carry;
            carry = 0;
            if(temp > 9){
                carry = temp / 10;
                temp = temp % 10;
            }
            ans->next = new ListNode(temp);
            ans = ans->next;
            l1 = l1->next;
        }

        while(l2 != NULL){
            int temp = l2->val + carry;
            carry = 0;
            if(temp > 9){
                carry = temp / 10;
                temp = temp % 10;
            }
            ans->next = new ListNode(temp);
            ans = ans->next;
            l2 = l2->next;
        }

        if(carry){
            ans->next = new ListNode(carry);
        }

        return tempAns->next;
    }
};


