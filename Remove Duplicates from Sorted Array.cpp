#include<iostream>
#include<vector>
using namespace std;
class Solution {
	public:
		int removeDuplicates(vector<int>& nums) {//ע�������Ѿ�����!!!
			if (nums.size() == 0)
				return 0;
			int count = 1;
			for (int i = 1; i != nums.size(); ++i)
			{
				if (nums[i] != nums[i - 1])
				{
					nums[count] = nums[i];//����������һ���ܹؼ�������������Ӧ��������λ�ö�λ����ǰ������Ԫ�ء�
					++count;
				}
			}

		return count;
	}
};

int main()
{
	Solution s1;
	vector<int> ivec{ 1,1,4,5,6,6 };
	cout << s1.removeDuplicates(ivec) << endl;

	return 0;
}