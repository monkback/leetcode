#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
	vector<int> twosum(vector<int> &sums, int target)
	{
		for (auto i = 0; i != sums.size() - 1; ++i)
		{
			for (auto j = i + 1; j != sums.size(); ++j)
			{
				if (sums[j] == target - sums[i])
					return vector<int>{ i, j };
			}
		}
	}
};

int main()
{
	vector<int> ivec = { 2,7,11,15 };
	int target = 22;
	Solution o1;
	vector<int> result;
	result = o1.twosum(ivec, target);

	for (auto it = result.begin(); it != result.end(); ++it)
		cout << *it << " ";
	cout << endl;

	return 0;
	
}