#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans(numRows);
    ans[0].push_back(1);
    for (int i = 1; i < numRows; i++)
    {
        ans[i].push_back(1);
        for (int j = 1; j < i; j++)
            ans[i].push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
        ans[i].push_back(1);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans = generate(n);
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k < n; k++)
            cout << " ";
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << "\n";
    }
}