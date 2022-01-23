#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if (x & 1 != 0)
            {
                a[i][j] = (a[i][j] == 1) ? 0 : 1;
                if (i > 0)
                    a[i - 1][j] = (a[i - 1][j] == 1) ? 0 : 1;
                if (i < n - 1)
                    a[i + 1][j] = (a[i + 1][j] == 1) ? 0 : 1;
                if (j > 0)
                    a[i][j - 1] = (a[i][j - 1] == 1) ? 0 : 1;
                if (j < n - 1)
                    a[i][j + 1] = (a[i][j + 1] == 1) ? 0 : 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j];
        cout << "\n";
    }
}