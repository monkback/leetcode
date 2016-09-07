//按照归并排序，先将两个有序数组合并，然后找合并后数组的中位数//
//复杂度O(m+n)，m,n分别代表两个数组的长度
#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
	double findMedianSortedArrays(vector<int> & nums1, vector<int> & nums2)
	{
		int m = nums1.size();
		int n  = nums2.size();

		vector<int> merged_array = merge(nums1, nums2);
		return (merged_array[(m + n) / 2] + merged_array[(m + n - 1) / 2]) / 2.0; //一个亮点，不用考虑数组长度的奇偶性

	}
	vector<int> merge(const vector<int> A, const vector<int> B)
	{
		vector<int> result;
		int m = A.size(), n = B.size();
		int i = 0, j = 0;
		while (i != m && j != n)
		{
			if (A[i] <= B[j])
			{
				result.push_back(A[i]);
				i++;
			}
			else
			{
				result.push_back(B[j]);
				j++;
			}
		}
		if (i == m)
		{
			while (j != n)
			{
				result.push_back(B[j]);
				j++;
			}
		}

		if (j == n)
		{
			while (i != m)
			{
				result.push_back(A[i]);
				i++;
			}
		}

		return result;
	}

private:

};

int main()
{
	vector<int> ivec1{ 1,3,5,7 };
	vector<int> ivec2{ 2,5,6,8 };

	Solution solution;
	double result = solution.findMedianSortedArrays(ivec1, ivec2);

	cout << result << endl;

	return 0;
}
