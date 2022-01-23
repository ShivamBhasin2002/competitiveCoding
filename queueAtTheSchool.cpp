#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    string q;
    cin >> n >> t;
    cin.ignore();
    getline(cin, q);
    for (int i = 1; i <= t; i++)
    {
        for (int j = 0; j < n - 1; j++)
            if (q[j] == 'B' && q[j + 1] == 'G')
            {
                swap(q[j], q[j + 1]);
                j++;
            }
    }
    cout << q;
}