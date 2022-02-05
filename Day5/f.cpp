/**
 * @file f.cpp
 * @author your name (you@domain.com)
 * @brief https://leetcode.com/problems/delete-node-in-a-linked-list/
 * @version 0.1
 * @date 2022-02-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

void deleteNode(ListNode* node) {
      *node = *node->next;
}