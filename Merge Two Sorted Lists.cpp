/*
题目描述

输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。
*/

// 注：该题不采用新建链表的方法，充分利用原有的链表

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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
      if(pHead1 == NULL)
        return pHead2;
      if(pHead2 == NULL)
        return pHead1;
      ListNode *List,*p;
      if(pHead1->val < pHead2->val)    // 为List链表添加头结点
      {
        List = pHead1;
        pHead1 = pHead1->next;
      }
      else
      {
        List = pHead2;
        pHead2 = pHead2->next;
      }
      p = List;
      while(pHead1 && pHead2)
      {
        if(pHead1->val < pHead2->val)
        {
          p->next = pHead1;
          p = p->next;
          pHead1 = pHead1->next;
        }
        else
        {
          p->next = pHead2;
          p = p->next;
          pHead2 = pHead2->next;
        }
      }
      
      if(pHead1)
        p->next = pHead1;
      else
        p->next = pHead2;
      return List;
    }
};
