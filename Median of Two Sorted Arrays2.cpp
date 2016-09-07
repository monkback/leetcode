#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution
{
public:
	double findKth(vector<int> &nums1, int  i, vector<int> &nums2, int j, int k)
	{
		if (nums1.size() - i > nums2.size() - j)
			return findKth(nums2, j, nums1, i, k);
		if (nums1.size() == i)
			return nums2[j + k - 1];
		if (k == 1)
			return min(nums1[i], nums2[j]);
		int pa = min(int(nums1.size()), i + k / 2);
		int pb = k - pa + i + j;

		if (nums1[pa - 1] < nums2[pb - 1])
			return findKth(nums1, pa, nums2, j, k - pa + i);
		else if (nums1[pa - 1] > nums2[pb - 1])
			return findKth(nums1, i, nums2, pb, k - pb + j);
		else
			return nums1[pa - 1];
	}

	double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
	{
		int total = nums1.size() + nums2.size();
		if (total % 2)
			return findKth(nums1, 0, nums2, 0, total / 2 + 1);
		else
			return (findKth(nums1, 0, nums2, 0, total / 2) + findKth(nums1, 0, nums2, 0, total / 2 + 1)) / 2.0;
	}
};

int main()
{
	vector<int> ivec1{ 1,3,5,7 };
	vector<int> ivec2{ 2,4,6,8 };
	Solution ss;
	double result = ss.findMedianSortedArrays(ivec1, ivec2);

	cout << result << endl;

	return 0;
}

