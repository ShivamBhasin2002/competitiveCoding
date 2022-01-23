#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k, int i = 0)
{
	if (i == nums.size())
		return;
	int x = nums[i];
	rotate(nums, k, i + 1);
	nums[(i + k) % nums.size()] = x;
	for (int j = 0; j < nums.size(); j++)
		cout << nums[j] << " ";
	cout << "\n";
}

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	rotate(a, k);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}