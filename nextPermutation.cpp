#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

void nextPermutation(vector<int> &nums)
{
    int l = -1, r = nums.size() - 1;
    for (int i = nums.size() - 2; i >= 0; i--)
        if (nums[i + 1] > nums[i])
        {
            l = i;
            break;
        }
    for (int i = nums.size() - 1; i >= l; i--)
        if (nums[l] < nums[r])
        {
            r = i;
            swap(nums[l], nums[r]);
            break;
        }
    l++;
    for (; l < r; l++, r--)
        swap(nums[l], nums[r]);
}

int main()
{
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
}