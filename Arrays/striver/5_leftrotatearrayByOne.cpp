#include <bits/stdc++.h>
using namespace std;

void rotateArrayLeftOne(vector<int> &arr)
{
    int n = arr.size();
    int first = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
    for (int x : arr)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    rotateArrayLeftOne(arr);
    return 0;
}