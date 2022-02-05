/**
 * @file e.cpp
 * @author your name (you@domain.com)
 * @brief https://leetcode.com/problems/add-two-numbers/
 * @version 0.1
 * @date 2022-02-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

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

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        while(l1 || l2 || carry){
            if(l1)carry+=l1->val,l1 = l1->next;
            if(l2)carry+=l2->val,l2 = l2->next;
            ListNode* curr = new ListNode(carry%10);
            tail->next = curr;
            tail = curr;
            carry/=10;
        }
        return dummy->next;
        
    }
};