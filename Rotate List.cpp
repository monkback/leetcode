#include<iostream>
using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(nullptr){}//构造函数
};
class Solution1
{
public:
	ListNode *rotateRight(ListNode *head, int k)
	{
		if (head == nullptr || k <= 0)
			return head;
		//统计节点个数
		int count = 1;
		ListNode *pre = head, *cur;
		while (pre->next != nullptr)
		{
			count++;
			pre = pre->next;
		}
		pre->next = head;//此时pre已经指向最后一个节点，串成一个环

		k = k % count;
		int index = 1;
		pre = cur = head;
		//右移k位
		while (index <= count - k)
		{
			pre = cur;
			cur = cur->next;
			++index;
		}
		pre->next = nullptr;
		head = cur;
		return head;
	}

};

class Solution2
{
public:
	ListNode *rotateRight(ListNode *head, int k)
	{
		if (head == nullptr || k <= 0)
			return head;
		int len = 1;
		ListNode *p = head;
		while (p->next != nullptr)//求长度
		{
			len++;
			p = p->next;
		}
		k = len - k % len;
		p->next = head;//首尾相连

		for (int step = 0; step != k; ++step)
		{
			p = p->next;
		}
		head = p->next;//新的首节点
		p->next = nullptr;//断开环
		return head;
	}
};
