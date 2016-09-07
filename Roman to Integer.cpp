#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	int romanToInt(string s) {
		int result = stringToNumber(s[0]);
		for (int i = 1; i != s.size(); ++i)
		{
			if (stringToNumber(s[i - 1]) >= stringToNumber(s[i]))
			{
				result += stringToNumber(s[i]);
			}
			else {
				result += stringToNumber(s[i]) - 2 * stringToNumber(s[i - 1]);//注意逻辑，为什么是这样。
			}
		}
		return result;
	}
	int stringToNumber(char ch)
	{
		switch (ch)
		{
		case 'I':return 1;
		case 'V':return 5;
		case 'X':return 10;
		case 'L':return 50;
		case 'C':return 100;
		case 'D':return 500;
		case 'M':return 1000;
		}
		return 0;
	}
};
int main()
{
	Solution s1;
	string str("CMDI");
	cout << s1.romanToInt(str) << endl;

	return 0;
}