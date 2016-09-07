#include<iostream>
using namespace std;
class Solution
{
public:
	bool isPalindrome(int x)
	{
		if (x < 0)
			return false;
		if (x < 10)
			return true;
		int y = 0, n = x;
		while (n)
		{
			y = y * 10 + n % 10;
			n = n / 10;
		}

		if (x == y)
			return true;
		else
			return false;
	}
};

int main()
{
	int x = 9876789;
	Solution s1;
	bool result = s1.isPalindrome(x);
	cout << result << endl;

	return 0;
}
