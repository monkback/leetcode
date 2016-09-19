#include<iostream>
using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(nullptr){}//���캯��
};
class Solution1
{
public:
	ListNode *rotateRight(ListNode *head, int k)
	{
		if (head == nullptr || k <= 0)
			return head;
		//ͳ�ƽڵ����
		int count = 1;
		ListNode *pre = head, *cur;
		while (pre->next != nullptr)
		{
			count++;
			pre = pre->next;
		}
		pre->next = head;//��ʱpre�Ѿ�ָ�����һ���ڵ㣬����һ����

		k = k % count;
		int index = 1;
		pre = cur = head;
		//����kλ
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
		while (p->next != nullptr)//�󳤶�
		{
			len++;
			p = p->next;
		}
		k = len - k % len;
		p->next = head;//��β����

		for (int step = 0; step != k; ++step)
		{
			p = p->next;
		}
		head = p->next;//�µ��׽ڵ�
		p->next = nullptr;//�Ͽ���
		return head;
	}
};
