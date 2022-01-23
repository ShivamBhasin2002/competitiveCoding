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
        map<long long int, int> hm;
        long long int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            hm[temp]++;
        }
        for (auto i : hm)
        {
            cout << i.first << " " << i.second << "\n";
        }
        cout << "\n";
    }
}