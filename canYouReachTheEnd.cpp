#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n;
        map<int, int> a;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            a[x + y - 2]++;
        }
        bool ans = true;
        for (auto i : a)
        {
            if ((i.first + 1 <= n && i.first + 1 == i.second) || (i.first + 1 > n && (2 * n) - (i.first + 1) == i.second))
            {
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}