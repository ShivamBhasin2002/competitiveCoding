#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x & 1 == 1)
                odd++;
            else
                even++;
        }
        if (n & 1 == 1)
            cout << min(even, (n >> 1) + 1) + min(odd, n >> 1) << "\n";
        else
            cout << min(even, n >> 1) + min(odd, n >> 1) << "\n";
    }
}