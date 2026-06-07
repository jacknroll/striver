#include <bits/stdc++.h>
using namespace std;

/*
int main()
{
    vector<int> arr = {10, 20, 30, 40};
    int element = 50;
    int pos = 2;

    arr.insert(arr.begin() + pos, element);

    for (int x : arr)
    {
        cout << x << " ";
    }
}

*/
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 0};
    int ele = 50;
    int pos = 2;
    for (int i = arr.size() - 1; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = ele;

    for (int x : arr)
    {
        cout << x << " ";
    }
}