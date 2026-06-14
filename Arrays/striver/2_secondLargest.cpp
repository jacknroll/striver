#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

////////////////////1.SORTING METHOD TAKES O(NLOGN)////////////////////////
/*
int secondLargestElement(vector<int> &arr)
{
   int s=arr.size();
   if(s==0||s==1){return -1;}
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

*/

///////////////////////2.O(n)method with 2 for loops////////////////////////
/*
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

// single for loop,o(n) method

int secondLargestElement(vector<int> &nums)
{
    int maxElement = nums[0];
    int secondMax = -1;

    for (int i = 1; i < nums.size(); i++)
    {
        int temp = nums[i];
        if (temp > maxElement)
        {
            secondMax = maxElement;
            maxElement = temp;
        }
        else if (temp > secondMax && temp != maxElement)
        {
            secondMax = temp;
        }
    }
    return secondMax;
}
int main()
{
    vector<int> nums = {10, 20, 30};

    int secondMax = secondLargestElement(nums);
    cout << secondMax;
    return 0;
}
