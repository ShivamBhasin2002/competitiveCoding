#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

bool checkRow(vector<vector<int>> a, int n, int i)
{
    for (int j = 0; j < n; j++)
        if (a[i][j] != 1)
            return false;
    return true;
}

bool checkCol(vector<vector<int>> a, int m, int j)
{
    for (int i = 0; i < m; i++)
        if (a[i][j] != 1)
            return false;
    return true;
}

int main()
{
    fast;
    int n, m, flag = 1;
    cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n, 0));
    vector<vector<int>> ans(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                bool r = checkRow(a, n, i), c = checkCol(a, m, j);
                if (r && c)
                    ans[i][j] = 1;
                else if (!(r || c))
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    if (flag)
    {
        cout << "YES\n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
    else
        cout << "NO";
}