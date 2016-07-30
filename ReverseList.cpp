/*
题目描述

输入一个链表，反转链表后，输出链表的所有元素。
*/

// 该题不难，新建一个链表的头结点，然后采取“头插法”插入元素即可

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
    ListNode* ReverseList(ListNode* pHead) {
      if(pHead == NULL)
        return NULL;
      ListNode List(-1), *r = &List;
      ListNode *p = pHead, *q;
      while(p)
      {
        q = p->next;
        p->next = r->next;
        r->next = p;
        p = q;
      }
      
      return List;
    }
};
