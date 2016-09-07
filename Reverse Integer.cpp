#include<iostream>
using namespace std;
class Solution
{
public:
	int reverse(int x)
	{
		bool negative_flag = false;
		if (x == INT_MIN)
			return 0;
		if (x < 0)
		{
			x = -x;
			negative_flag = true;
		}
		long long result = 0;
		while (x != 0) //��x����ֵ���Ժ�õ�������
		{
			result = result * 10 + x % 10;
			x = x / 10;
		}

		if (result > INT_MAX) //ͬʱ��Ҫ����������������Ժ�᲻��Խ�������
			result = 0;

		if (negative_flag)
			return -result;
		else
			return result;
	}

};

int main()
{
	int x = -872;
	Solution s1;
	cout << s1.reverse(x) << endl;

	return 0;
}