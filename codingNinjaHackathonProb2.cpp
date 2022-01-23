#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<long long int> a(n + 1), b(m);
    a[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 1; i <= n; i++)
        a[i] += a[i - 1];
    for (int i = 0; i < m; i++)
    {
        int j = 0;
        while (b[i] > a[j])
            j++;
        cout << j << " " << b[i] - a[j - 1];
        cout << "\n";
    }
}