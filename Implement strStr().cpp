#include<iostream>
#include<string>
using namespace std;
class Solution
{
public:
	int strStr(string haystack, string needle)//×î¼òµ¥°æ±¾
	{
		int hlen = haystack.size();
		int nlen = needle.size();
		if (hlen < nlen)
			return -1;
		for (int i = 0; i != hlen - nlen + 1; ++i)
		{
			if (haystack.substr(i, nlen) == needle)
				return i;
		}
		return -1;
	}
};
int main()
{
	string s1("lkoprngs");
	string s2("op");
	Solution s;
	int result = s.strStr(s1, s2);

	cout << result << endl;

	return 0;
}