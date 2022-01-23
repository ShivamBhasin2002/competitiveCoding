#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		double m = INT_MIN, sum = 0;
		cin >> n;
		double a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
			m = max(m, a[i]);
		}
		double ans = m + (double)((sum - m) / (n - 1));
		cout << setprecision(12) << ans << "\n";
	}
}