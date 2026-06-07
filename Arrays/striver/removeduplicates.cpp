#include <bits/stdc++.h>
#include <vector>
using namespace std;

/*
void removeDuplicates(vector<int> arr)

{

    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                arr.erase(arr.begin() + j);
                j--;
            }
        }
    }

    for (int x : arr)
    {
        cout << x << " ";
    }
}
*/

// do it in o(n'2)
// o(1) space

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
/*
//o(n) but o(n) space
void removeDuplicates(vector<int> arr)

{
    vector<int> newArr;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            newArr.push_back(arr[i]);
        }
        else
        {
            i++;
        }
    }
    newArr.push_back(arr[arr.size() - 1]);

    for (int x : newArr)
    {
        cout << x << " ";
    }
}
*/
void removeDuplicates(vector<int> nums)
{
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4};
    removeDuplicates(arr);

    return 0;
}