/**
 * @file f.cpp
 * @author your name (you@domain.com)
 * @brief https://leetcode.com/problems/middle-of-the-linked-list/
 * @version 0.1
 * @date 2022-02-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

struct ListNode{
     int data;
     struct ListNode* next;
     ListNode(int val){
         data = val;
         next = NULL;
     } 
};

ListNode* middleNode(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        if(head->next==NULL) return head;
        do{
            slow = slow->next;
            fast = fast->next->next;
        }while(fast!=NULL && fast->next!=NULL);
        return slow;
}