/*
题目描述

输入一个链表，输出该链表中倒数第k个结点。
*/

// 该题和leetcode中“删除倒数第k个结点”相似，使用两个指针，让一个先走k-1步，然后连个同时走

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
      if(pListHead == NULL || k == 0)
        return NULL;
      ListNode *p = pListHead;
      ListNode *q = pListHead;
      unsigned int i;
      for(i = 1; i < k; i++)
      {
        if(p->next != NULL)
          p = p->next;
        else
          return NULL;
      }
      while(p->next != NULL)
      {
        p = p->next;
        q = q->next;
      }
      return q;
    }
};
