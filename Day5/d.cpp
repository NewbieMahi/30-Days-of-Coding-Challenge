/**
 * @file d.cpp
 * @author your name (you@domain.com)
 * @brief https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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

ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow =head;
        ListNode* fast =head;
        while(n--){
            fast = fast->next;
        }
        if(fast==NULL){
            return slow->next;
        }
        while(fast->next!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* curr = slow->next;
        slow->next = curr->next;
        delete curr;
        return head;
}