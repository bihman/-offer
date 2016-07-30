/*
题目描述

输入一个链表，从尾到头打印链表每个节点的值。 
输入描述:
输入为链表的表头


输出描述:
输出为需要打印的“新链表”的表头
*/


/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(struct ListNode* head) {
      if(head == NULL)
        return NULL;
      vector<int> res;
      ListNode *p = head;
      while(p)
      {
        res.push_back(res.begin(),p->val);
        p = p->next;
      }
      return res;
    }
};
