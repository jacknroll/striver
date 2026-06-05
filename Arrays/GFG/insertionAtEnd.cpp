#include <bits/stdc++.h>
using namespace std;

/*
int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    int ele = 100;
    arr.push_back(ele);
    for (int x : arr)
    {
        cout << x << " ";
    }
}
*/

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 0};
    int elem = 100;
    arr[arr.size() - 1] = elem;
    for (int x : arr)
    {
        cout << x << " ";
    }
}