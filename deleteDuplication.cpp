/*
题目描述

在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，重复的结点不保留，返回链表头指针。 
例如，链表1->2->3->3->4->4->5 处理后为 1->2->5
*/

// 该题和leetcode中一题完全相同

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
      if(pHead == NULL)
        return NULL;
      ListNode *p = pHead, *q = p->next;
      ListNode List(-1),*r = &List;
      int count = 1;  // 统计p所指结点的个数
      int value;
      while(q)
      {
        if(p->val == q->val)
        {
          count++;
          p = q;
          q = p->next;
        }
        else if(p->val != q->val && count == 1)
        {
          value = p->val;
          r->next = new ListNode(value);
          p = q;
          q = p->next;
          r = r->next;
          count = 1;
        }
        else
        {
          p = q;
          q = p->next;
          count = 1;
        }
      }
      if(count == 1)
        r->next = new ListNode(p->val);
      return List;
    }
};
