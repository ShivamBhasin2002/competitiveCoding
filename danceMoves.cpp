#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    int t, x, y;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        cin >> x >> y;
        if (x < y)
            ans = ((y - x) >> 1) + ((y - x) & 1) * 2;
        else if (x > y)
            ans = x - y;
        cout << ans << "\n";
    }
}