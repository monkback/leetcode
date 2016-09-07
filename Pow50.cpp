#include<iostream>
using namespace std;
class Solution {
public:
	double myPow(double x, int n) {
		if (n > 0)
			return pow(x, n);
		else
			return 1.0 / pow(x, -n);//ע��n������

	}
	double pow(double x, int n)//�˺���ֻ����n��Ϊ�������
	{
		if (n == 0)
			return 1;
		double val = pow(x, n / 2); //ͨ����һ�����ټ�����
		if (n % 2 == 0)
			return val*val;
		else
			return val*val*x;
	}
};

int main()
{
	Solution s1;
	cout << s1.myPow(1.5, -3) << endl;

	return 0;
}