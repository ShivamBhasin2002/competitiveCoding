#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a,a+n);
		cout<<max((a[n-2]-a[0])*a[n-1],(a[n-1]-a[0])*a[n-2])<<"\n";
	}
}