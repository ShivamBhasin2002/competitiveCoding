#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    fast;
    int n, a, b, sum1 = 0, sum2 = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        sum1 += a;
        sum2 += b;
    }
    if (sum1 > sum2)
        cout << "1 " << sum1 - sum2;
    else
        cout << "2 " << sum2 - sum1;
}