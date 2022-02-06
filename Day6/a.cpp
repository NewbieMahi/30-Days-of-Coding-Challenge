/**
 * @file a.cpp
 * @author your name (you@domain.com)
 * @brief https://leetcode.com/problems/intersection-of-two-linked-lists/
 * @version 0.1
 * @date 2022-02-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;


// Solution 1

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p1 = headA;
        ListNode* p2 = headB;
        while(p1!=p2){
            p1? p1 = p1->next:p1 = headB;
            p2? p2 = p2->next:p2 = headA;
        }
        return p1;
    }
    
};

// Solution 2:

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*>s;
        while(headA!=NULL){
            s.insert(headA);
            headA = headA->next;
        }
        while(headB!=NULL){
            if(s.find(headB)!=s.end()) return headB;
            headB = headB->next;
        }
        return NULL;
    }
};