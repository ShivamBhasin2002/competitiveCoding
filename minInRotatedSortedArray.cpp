#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    int i = 0, j = nums.size() - 1, mid;
    while (i <= j)
    {
        mid = (i + j) / 2;
        if (nums[mid] >= nums[j])
            i = mid + 1;
        else
            j = mid;
    }
    return nums[mid];
}

int main()
{
    vector<int> arr = {3, 1, 2};
    cout << findMin(arr);
}