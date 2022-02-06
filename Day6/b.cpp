/**
 * @brief https://leetcode.com/problems/linked-list-cycle/
 * 
 */

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(head==NULL) return false;
        if(head->next==NULL) return false;
        if(head->next == head)
            return true;
        
        do{
            slow  = slow->next;
            fast = fast->next->next;
        }while(slow!=fast && slow!=NULL && slow->next!=NULL && fast!=NULL && fast->next!=NULL);
        if(slow==fast) return true;
        return false;
    }
};