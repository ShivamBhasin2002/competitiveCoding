#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        ll x;
        cin >> n >> x;
        vector<ll> a(n);
        map<ll, ll> hash;
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
        {
            hash[a[i] ^ x]++;
            hash[a[i]]++;
        }
        pair<ll, ll> max(0, 0);
        for (auto i : hash)
            if (i.second > max.second)
            {
                max.first = i.first;
                max.second = i.second;
            }
        ll steps = max.second;
        for (ll i = 0; i < n; i++)
            if (a[i] == max.first)
                steps--;
        cout << max.second << " " << steps << "\n";
    }
}