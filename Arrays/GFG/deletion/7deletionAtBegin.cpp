#include <bits/stdc++.h>
#include <vector>
using namespace std;

// built in methods
void removeFirstElement(vector<int> arr)
{

    arr.erase(arr.begin());
    for (int x : arr)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> arr = {2, 349, 19, 0};
    removeFirstElement(arr);

    return 0;
}