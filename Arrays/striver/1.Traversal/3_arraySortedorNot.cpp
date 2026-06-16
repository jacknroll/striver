#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

/*
// using sort function
void checkSortedOrnot(vector<int> &nums)
{
    vector<int> newArr = nums;
    sort(nums.begin(), nums.end());

    if (newArr == nums)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}

*/

// using for loop

bool checkSortedOrnot(vector<int> &nums)
{
    bool check = false;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] <= nums[i + 1])
        {
            check = true;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 2, 1, 4, 5};
    bool ans = checkSortedOrnot(arr);
    cout << boolalpha << ans;
    return 0;
}