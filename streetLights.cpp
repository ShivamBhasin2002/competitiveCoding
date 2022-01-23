#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    int n, p, x, r;
    cin >> n >> p;
    p++;
    vector<int> a(p, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> x >> r;
        a[x]++;
        for (int i = x - r, j = x + r; i != x && j != x; i++, j--)
        {
            if (i >= 0)
                a[i]++;
            if (j < p)
                a[j]++;
        }
    }
    int ans = 0;
    for (int i = 0; i < p; i++)
    {
        // cout << a[i] << " ";
        if (a[i] != 1)
            ans++;
    }
    // cout << "\n";
    cout << ans;
}