#include <bits/stdc++.h>
#include <vector>
using namespace std;

////////////////////////////using erase method in vectorO(n*n) method////////////////////////

/*
void removeDuplicates(vector<int> arr)
{

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            arr.erase(arr.begin() + i);
            i--;
        }
    }

    for (int x : arr)
    {
        cout << x << " ";
    }
}
*/

/////////////////////O(n)Tc But O(n)space///////////////////////////////////
void removeDuplicates(vector<int> arr)

{
    if (arr.empty())
        return;
    vector<int> newArr;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            newArr.push_back(arr[i]);
        }
    }
    newArr.push_back(arr[arr.size() - 1]);

    for (int x : newArr)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 3, 3, 4};
    removeDuplicates(arr);

    return 0;
}