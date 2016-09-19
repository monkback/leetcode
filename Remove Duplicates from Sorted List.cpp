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
		ListNode *pre = head;//保存头指针
		while (head != nullptr)
		{
			//下一个节点存在，且当前节点和下一个节点的值重复
			while (head->next != nullptr && head->val == head->next->val)
			{
				head->next = head->next->next;
			}
			head = head->next;
		}
		return pre;
	}
};
