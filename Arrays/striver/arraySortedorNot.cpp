#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;


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


int main()
{
    vector<int> arr = {1, 17, 24};
    checkSortedOrnot(arr);
    return 0;
}