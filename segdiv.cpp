#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, j = 2, k = 3;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << j << " ";
			if (i & 1)
				j += k;
			else
				j++;
		}
		cout << "\n";
	}
}