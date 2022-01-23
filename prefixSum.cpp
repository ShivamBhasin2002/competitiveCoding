#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if ((n >> 1) & 1 != 0)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (int i = 1; i <= n / 4; i++)
                cout << i << " ";
            for (int i = n - (n / 4) + 1; i <= n; i++)
                cout << i << " ";
            cout << "\n";
            for (int i = n / 4 + 1; i <= (n - (n / 4)); i++)
                cout << i << " ";
            cout << "\n";
        }
    }
}