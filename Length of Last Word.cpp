//����ⷨ�ܶ� ������Ϊ�������������ġ�
#include<iostream>
#include<string>
using namespace std;
class Solution
{
public:
	int lengthOfLastWord(string s)
	{
		int len = s.size();
		if (len == 0)
			return 0;
		while (len > 0 && s[len - 1] == ' ')
			len--;
		int end = len;
		while (len > 0 && s[len - 1] != ' ')
			len--;
		int begin = len;

		return end - begin;
	}
};

int main()
{
	string s = "hello world";
	Solution s1;
	cout << s1.lengthOfLastWord(s) << endl;

	return 0;
	
}