#include<vector>
#include<iostream>
using namespace std;
class Solution
{
public:
	int removeElement(vector<int> & nums, int val)
	{
		int i = 0;
		for (int j = 0; j != nums.size(); ++j)
		{
			if (nums[j] != val)
			{
				nums[i] = nums[j];
				++i;
			}
		}
		return i;
	}
};
int main()
{
	vector<int>ivec{ 3, 2, 2, 3 };
	int val = 3;
	Solution se;
	cout << se.removeElement(ivec, val) << endl;

	return 0;
}