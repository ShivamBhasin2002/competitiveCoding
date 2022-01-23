#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    fast;
    map<string, int> hashMap;
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (hashMap[s] == 0)
            cout << "OK\n";
        else
            cout << s << hashMap[s] << "\n";
        hashMap[s]++;
    }
}