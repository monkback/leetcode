#include<iostream>
#include<vector>
using namespace std;
class Solution {
	public:
		int removeDuplicates(vector<int>& nums) {//注意数组已经有序!!!
			if (nums.size() == 0)
				return 0;
			int count = 1;
			for (int i = 1; i != nums.size(); ++i)
			{
				if (nums[i] != nums[i - 1])
				{
					nums[count] = nums[i];//更新数组这一步很关键。将计数器对应在数组中位置定位到当前遍历的元素。
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