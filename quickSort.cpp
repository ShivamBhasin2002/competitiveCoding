#include <bits/stdc++.h>
using namespace std;

int pivot(int a[], int l, int h)
{
	int pivot = a[h], i = l - 1, j = l;
	for (; j < h; j++)
		if (a[j] < pivot)
		{
			i++;
			swap(a[i], a[j]);
		}
	swap(a[i + 1], a[h]);
	return i + 1;
}

void quickSort(int a[], int i, int j)
{
	if (i < j)
	{
		int p = pivot(a, i, j);
		quickSort(a, i, p - 1);
		quickSort(a, p + 1, j);
	}
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	quickSort(a, 0, n - 1);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}