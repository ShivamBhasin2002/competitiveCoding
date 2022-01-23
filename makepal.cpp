#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        long long int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x & 1LL == 1)
                c++;
        }
        if (n == 1 || n == 2 || c == 0)
            cout << "0\n";
        else
            cout << c / 2 << "\n";
    }
}