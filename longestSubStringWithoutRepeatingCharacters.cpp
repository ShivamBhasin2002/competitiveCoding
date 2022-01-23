#include <bits/stdc++.h>
using namespace std;

bool repeat(string s, int st, int end)
{
	map<char, int> t;
	for (int i = st; i < end; i++)
	{
		t[s[i]]++;
		if (t[s[i]] > 1)
			return true;
	}
	return false;
}
int lengthOfLongestSubstring(string s)
{
	int st = 0, ans = 1;
	for (int i = 0; i < s.size(); i++)
	{
		if (!repeat(s, st, i))
			ans = max(ans, i - st);
		else
			st = i;
		cout << "\n";
	}
	return ans;
}

int main()
{
	string s;
	getline(cin, s);
	cout << lengthOfLongestSubstring(s);
}