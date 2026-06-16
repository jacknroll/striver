#include <bits/stdc++.h>
#include <vector>
using namespace std;

// built in methods
/*
//o(n) ,o(1)
void removeFirstElement(vector<int> arr)
{

arr.erase(arr.begin());
for (int x : arr)
{
    cout << x << " ";
}
}
*/
//o(n),o(1)
void removeFirstElement(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr.pop_back();
    for (int x : arr)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> arr = {10, 100, 200, 0};
    removeFirstElement(arr);

    return 0;
}