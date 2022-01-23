#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, l = 1, l1 = 1, l2 = 1;
		cin >> n >> m;
		int a[n], b[m];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < m; i++)
			cin >> b[i];
		for (int i = 1; i < n; i++)
			if (a[i] >= a[i - 1])
			{
				l++;
				l1 = max(l1, l);
			}
			else
				l = 1;
		l = 1;
		for (int i = 1; i < m; i++)
			if (b[i] >= b[i - 1])
			{
				l++;
				l2 = max(l2, l);
			}
			else
				l = 1;
		cout << l1 + l2 << "\n";
	}
}