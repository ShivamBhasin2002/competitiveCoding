#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        l = (l - 1) / 3;
        r /= 3;
        long long ans = r - l;
        cout << ans << "\n";
    }
}