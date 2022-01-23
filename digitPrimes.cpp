#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

bool isPrimeDigit(int x)
{
    int sum = 0;
    while (x != 0)
    {
        sum += x % 10;
        x /= 10;
    }
    if (isPrime())
}

int main()
{
    fast;
    ll n, i, j;
    cin >> n;
    int arr[1000000] = {0};
    for (int i = 0; i < 1000000; i++)
        if (isPrimeDigit(i + 1))
            arr[i] += arr[i - 1];
}