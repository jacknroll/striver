#include <bits/stdc++.h>
#include <vector>
using namespace std;

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

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4};
    removeDuplicates(arr);

    return 0;
}