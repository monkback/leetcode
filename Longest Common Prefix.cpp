#include<vector>
#include<string>
#include<iostream>
using namespace std;
class Solution
{
public:
	string longestCommonPrefix(vector<string> &str)
	{
		if (str.size() == 0)
			return "";
		string prefix = str[0];
		for (int i = 0; i != str.size(); ++i)
		{
			if (prefix.size() == 0 || str[i].size() == 0)
				return "";

			int len = prefix.size() <= str[i].size() ? prefix.size() : str[i].size();
			int j;
			for (j = 0; j != len; ++j)
			{
				if (prefix[j] != str[i][j])
					break;
			}
			prefix = prefix.substr(0, j);
		}

		return prefix;
	}
};

int main()
{
	vector<string> str{ "clone","clokkk","clomn" };
	Solution solution;

	cout << solution.longestCommonPrefix(str) << endl;

	return 0;
}