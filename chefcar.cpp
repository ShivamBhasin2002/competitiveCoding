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
        ll n, v;
        cin >> n >> v;
        ll min = (v - 1ll) + (((n - v) * (n - v + 1ll)) / 2ll), max = ((n - 1ll) * n) / 2ll;
        cout << max << " " << min << "\n";
    }
}