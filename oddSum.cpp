#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    fast;
    int t;
    ll n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        n--;
        cout << n * n - n + 1 << "\n";
    }
}