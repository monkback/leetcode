#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
	int findLeftMost(vector<int>& nums, int target)
	{
		if (nums.size() == 0)
			return -1;
		int left = 0, right = nums.size() - 1;
		while (left < right)
		{
			int mid = left + (right - left) / 2;
			if (nums[mid] < target)
				left = mid + 1;
			else
			{
				right = mid;
			}

		}
		if (nums[left] == target)
			return left;
		else
			return -1;
	}
	int findRightMost(vector<int>& nums, int target)
	{
		if (nums.size() == 0)
			return -1;
		int left = 0, right = nums.size() - 1;
		while (left <= right)
		{
			int mid = left + (right - left) / 2;
			if (nums[mid] > target)
				right = mid - 1;
			else
				left = mid+1;
		}
		if (nums[right] == target)
			return right;
		else
			return -1;
	}
	vector<int> searchRange(vector<int>& nums, int target)
	{
		int re1 = findLeftMost(nums, target);
		int re2 = findRightMost(nums, target);
		return vector<int>{re1, re2};
	}
};

int main()
{
	vector<int> ivec = {1,2,3 };
	int target = 2;
	Solution s1;
	auto result = s1.searchRange(ivec, target);
	cout << result[0] << result[1] << endl;

	return 0;
}
