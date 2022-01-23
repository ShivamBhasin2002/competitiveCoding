#include <bits/stdc++.h>
using namespace std;

bool stoneGame(vector<int> &a)
{
    int l = 0, h = a.size() - 1;
    int alice = 0, bob = 0;
    while (l <= h)
    {
        alice += max(a[l], a[h]);
        (a[l] >= a[h]) ? l++ : h--;
        bob += max(a[l], a[h]);
        (a[l] >= a[h]) ? l++ : h--;
    }
    return alice > bob;
}

int main()
{
    vector<int> arr = {3, 7, 2, 3};
    cout << stoneGame(arr);
}