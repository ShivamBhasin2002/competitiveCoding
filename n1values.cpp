#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << "1 ";
        for (int i = 0; i < n; i++)
            cout << (1ll << i) << " ";
        cout << "\n";
    }
}