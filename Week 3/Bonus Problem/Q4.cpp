// Leetcode 25. Reverse Nodes in k-Group
// https://leetcode.com/problems/reverse-nodes-in-k-group/

#include<bits/stdc++.h>
using namespace std;

static int __=[](){cin.tie(0);std::ios::sync_with_stdio(false);return 0;}();

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:

    ListNode *oh = NULL, *ot = NULL, *th = NULL, *tt = NULL;

    void addFirstNode(ListNode *addNode){
        addNode->next = th;
        th = addNode;
        if(tt == NULL){
            tt = th;
        }
    }

    int len(ListNode *head){
        int l = 0;
        while(head != NULL){
            head = head->next;
            l++;
        }
        return l;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0 || k == 1){
            return head;
        }

        int length = len(head);

        if(length < k){
            return head;
        }
        
        ListNode *curr = head;

        while(curr != NULL){
            int tk = k;

            while(tk-- > 0){
                ListNode * forw = curr->next;
                curr->next = NULL;
                addFirstNode(curr);
                curr = forw;
            }

            length -= k;

            if(oh == NULL){
                oh = th;
                ot = tt;
            }else{
                ot->next = th;
                ot = tt;
            }

            th = tt = NULL;

            if(length < k){
                ot->next = curr;
                curr = NULL;
            }
        }

        return oh;
    }
};