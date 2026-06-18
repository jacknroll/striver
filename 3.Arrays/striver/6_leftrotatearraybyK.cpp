#include <bits/stdc++.h>
using namespace std;

///////////////////O(N)TC AND O(N)SC method/////////////////////

/*
void rotateArrayLeftK(vector<int> &arr, int k)
{
    vector<int> newArr;
    for (int i = k; i < arr.size(); i++)
    {
        newArr.push_back(arr[i]);
    }
    for (int i = 0; i < k; i++)
    {
        newArr.push_back(arr[i]);
    }
    for (int x : newArr)
    {
        cout << x << " ";
    }
}

*/

//////////////////////////REVERSAL ALGORITHM/////////////////////
// 1.reverse k to n elements
// 2.reverse 0 to k elements
// 3.reverse all

void rotateArrayLeftK(vector<int> &arr, int k)
{
    int n = arr.size();
    // reverse k to n
    for (int i = k; i < k + ((n - k) / 2); i++)
    {
        // int n1 = arr.size();
        int temp = arr[i];
        arr[i] = arr[n - (i - k) - 1];
        arr[n - (i - k) - 1] = temp;
    }
    for (int i = 0; i < (k) / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[k - i - 1];
        arr[k - i - 1] = temp;
    }
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (int x : arr)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};
    int k = 3;
    rotateArrayLeftK(arr, k);

    return 0;
}