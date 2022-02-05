/**
 * @file c.cpp
 * @author your name (you@domain.com)
 * @brief https://leetcode.com/problems/merge-two-sorted-lists/
 * @version 0.1
 * @date 2022-02-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 */

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL) return NULL;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<list2->val){
                ListNode* curr = new ListNode(list1->val);
                tail->next = curr;
                tail = curr;
                list1 = list1->next;
            }else{
                ListNode* curr = new ListNode(list2->val);
                tail->next = curr;
                tail = curr;
                list2 = list2->next;
            }
        }
        while(list1!=NULL){
            ListNode* curr = new ListNode(list1->val);
                tail->next = curr;
                tail = curr;
                list1 = list1->next;
        }
        while(list2!=NULL){
             ListNode* curr = new ListNode(list2->val);
                tail->next = curr;
                tail = curr;
                list2 = list2->next;
        }
        return dummy->next;
        
        
    }
};