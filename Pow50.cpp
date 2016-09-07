#include<iostream>
using namespace std;
class Solution {
public:
	double myPow(double x, int n) {
		if (n > 0)
			return pow(x, n);
		else
			return 1.0 / pow(x, -n);//注意n的正负

	}
	double pow(double x, int n)//此函数只考虑n不为负的情况
	{
		if (n == 0)
			return 1;
		double val = pow(x, n / 2); //通过这一步减少计算量
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