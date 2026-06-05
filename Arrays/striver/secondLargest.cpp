#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

/*
{
    int secondLargestElement(vector<int> &nums)
    int secondMax;
    int maxElement;
    if (nums[0] > nums[1])
    {
        maxElement = nums[0];
        secondMax = nums[1];
    }
    else if (nums[0] == nums[1])
    {
        maxElement = nums[1];
        secondMax = nums[2];
    }
    else
    {
        maxElement = nums[1];
        secondMax = nums[0];
    }

    for (int i = 2; i < nums.size(); i++)
    {
        if (nums[i] > maxElement)
        {
            maxElement = nums[i];
        }
    }
    for (int i = 2; i < nums.size(); i++)
    {
        if (nums[i] > secondMax && nums[i] < maxElement)
        {
            secondMax = nums[i];
        }
    }
    return secondMax;
}
*/

int secondLargestElement(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    int largest = arr[arr.size() - 1];

    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] != largest)
        {
            return arr[i];
        }
    }
    return -1;
    ;
}

int main()
{
    vector<int> nums = {
        8,
        8,
        8,
        8};
    int secondMax = secondLargestElement(nums);
    cout << secondMax;
    return 0;
}
