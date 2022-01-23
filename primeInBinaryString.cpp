#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin, s);
		bool flag = false;
		for (int i = 0; i < s.size() - 1; i++)
			if (s[i] == '1')
			{
				flag = true;
				break;
			}
		if (flag)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}