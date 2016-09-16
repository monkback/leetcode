//����һ�ַ�����쳲������������� ��ֱ��ʹ�õݹ���⣬���ǻᳬʱ��
//��Ϊ�ݹ���кܶ��ظ��ļ��㣬���������ַ������м�ļ�������������
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