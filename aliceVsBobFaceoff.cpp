#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int c = (n & 1LL) ? 0 : 1;
        while (n != 0)
        {
            if (n == 1LL)
            {
                c++;
                n--;
            }
            else if ((n & 1LL) == 1 && (n & 2) == 0)
            {
                n = n >> 1;
                while (n & 1LL == 0)
                    n = n >> 1;
                c += 2;
            }
            else if ((n & 1LL) == 1)
            {
                c += 2;
                n = n >> 1;
            }
            else
                n = n >> 1;
        }
        if ((c & 1LL) == 0)
            cout << "Bob";
        else
            cout << "Alice";
        cout << "\n";
    }
}