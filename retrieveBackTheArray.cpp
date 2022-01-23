#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, x;
	cin >> t;
	while (t--)
	{
		cin >> n >> x;
		int sum = 0;
		for (int i = 1; i < n; i++)
		{
			sum += i;
			cout << i << " ";
		}
		cout << x + sum << "\n";
	}
}