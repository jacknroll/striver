#include <bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int> &nums)
{
    int secondMax;
    int maxElement;
    if (nums[0] > nums[1])
    {
        maxElement = nums[0];
        secondMax = nums[1];
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
        else if (nums[i] > secondMax)
        {
            secondMax = nums[i];
        }
    }
    return secondMax;
}

int main()
{
    vector<int> nums = {1, 2, 4, 7,5};
    int secondMax = secondLargestElement(nums);
    cout << secondMax;
    return 0;
}