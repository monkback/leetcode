struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(nullptr) {}
};

class Solution
{
public:
	ListNode* deleteDuplicates(ListNode* head)
	{
		ListNode *pre = head;//����ͷָ��
		while (head != nullptr)
		{
			//��һ���ڵ���ڣ��ҵ�ǰ�ڵ����һ���ڵ��ֵ�ظ�
			while (head->next != nullptr && head->val == head->next->val)
			{
				head->next = head->next->next;
			}
			head = head->next;
		}
		return pre;
	}
};
