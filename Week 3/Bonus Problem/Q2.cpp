// Leetcode 61. Rotate List
// https://leetcode.com/problems/rotate-list/

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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL){
            return head;
        }

        int len = 1;
        ListNode *temp = head;

        while(temp->next != NULL){
            temp = temp->next;
            len++;
        }

        if(k == len){
            return head;
        }else{
            temp->next = head;
        }

        k = k % len;

        temp = head;
        for(int i=0; i<(len-k)-1; i++){
            temp = temp->next;
        }

        ListNode *newHead = temp->next;
        temp->next = NULL;

        return newHead;
    }
};