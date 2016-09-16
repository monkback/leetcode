//还有一种方法和斐波那契数列类似 ，直接使用递归求解，但是会超时，
//因为递归会有很多重复的计算，所以用这种方法将中间的计算结果保存下来
#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
	int climbStairs(int n)
	{
		if (n <= 2)
			return n;
		vector<int> ivec(n + 1);
		ivec[0] = 1;
		ivec[1] = 1;
		for (int i = 2; i <= n; ++i)
		{
			ivec[i] = ivec[i - 1] + ivec[i - 2];
		}
		return ivec[n];
	}
};

int main()
{
	Solution s1;
	cout << s1.climbStairs(7) << endl;

	return 0;
}