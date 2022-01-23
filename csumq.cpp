#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    fast;
    int n, q, i, j;
    cin >> n;
    int a[n + 1];
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    cin >> q;
    while (q--)
    {
        cin >> i >> j;
        cout << a[j + 1] - a[i] << "\n";
    }
}