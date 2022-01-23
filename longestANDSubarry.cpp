#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

long long int findMSB(long long int n)
{
    if (n == 0)
        return 0;
    long long int c = 0;
    n = n >> 1;
    while (n != 0)
    {
        n = n >> 1;
        c++;
    }
    return (1 << c);
}

int main()
{
    fast;
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int x = findMSB(n);
        if (n == 1)
            cout << 1 << "\n";
        else if (n == x)
            cout << x / 2 << "\n";
        else
            cout << max(n - x + 1, x / 2) << "\n";
        // else
        // {
        //     cout << x << " " << pow(2, x) - pow(2, x - 1) << " " << n - pow(2, x) + 1 << "\n";
        //     // cout << max(pow(2, x) - pow(2, x - 1), n - pow(2, x) + 1) << "\n";
        // }
    }
}
