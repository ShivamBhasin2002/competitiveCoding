#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r)
{
	int i = l, j = m + 1;
	while (l <= m && j <= r)
}

void mergeSort(int a[], int l, int r)
{
	if (l >= r)
		return;
	int mid = l + (r - l) / 2;
	mergeSort(a, l, mid);
	mergeSort(a, mid + 1, r);
	merge(a, l, mid, r);
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}