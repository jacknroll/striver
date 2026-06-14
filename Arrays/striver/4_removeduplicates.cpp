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
/*
void removeDuplicates(vector<int> &arr)

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
*/

////////////Inplace-O(n)method//////////////////////

void removeDuplicates(vector<int> &arr)
{
    int w, r;
    w = 0;
    for (int r = 1; r < arr.size(); r++)
    {

        if (arr[w] != arr[r])
        {
            // int temp = arr[w + 1];
            // arr[w + 1] = arr[r];
            // arr[r] = temp;
            w++;
            arr[w] = arr[r];
        }
    }
    for (int i = 0; i < w + 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {1, 2, 2, 3};
    removeDuplicates(arr);

    return 0;
}