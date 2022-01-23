#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

ll solve(ll x)
{
    ll c = 0;
    x = x >> 1;
    while (x != 0)
    {
        c++;
        x = x >> 1;
    }
    return 1 << c;
}

int main()
{
    fast;
    ll t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x == 0)
            cout << 1;
        else if (x == 1 || x == 2)
            cout << 2;
        else
        {
            ll ans = solve(x);
            if (ans == x)
                cout << x;
            else if (x == 2 * ans - 1)
                cout << x + 1;
            else
                cout << ans;
        }
        cout << "\n";
    }
}