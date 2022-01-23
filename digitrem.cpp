#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    fast;
    ll t, n, d, ans;
    cin >> t;
    while (t--)
    {
        // int c = 0;
        cin >> n >> d;
        vector<int> num;
        ll temp = n, ans = 0;
        while (temp != 0)
        {
            num.push_back(temp % 10);
            temp /= 10;
        }
        if (d == 0)
        {
            for (int i = 0; i < num.size(); i++)
                if (num[i] == d)
                    num[i] = 1;
        }
        else
            for (int i = num.size() - 1; i >= 0; i--)
                if (num[i] == d)
                {
                    num[i]++;
                    for (int j = i - 1; j >= 0; j--)
                        num[j] = 0;
                    break;
                }
        for (int i = num.size() - 1; i >= 0; i--)
            ans = ans * 10 + num[i];
        cout << ans - n;
        cout << "\n";
    }
}