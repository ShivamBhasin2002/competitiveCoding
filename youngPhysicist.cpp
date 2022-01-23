#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans[3] = {0};
    int x, y, z;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        ans[0] += x;
        ans[1] += y;
        ans[2] += z;
    }
    if (ans[0] == 0 && ans[1] == 0 && ans[2] == 0)
        cout << "YES";
    else
        cout << "NO";
}