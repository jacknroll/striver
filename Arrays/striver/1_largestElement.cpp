////////////////iterative approach/////////////////////////////
#include <iostream>
#include <vector>
using namespace std;

int largest(vector<int> &arr)
{
    int maxNum = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }
    return maxNum;
}

int main()
{
    vector<int> arr = {1, 2, 2, 3};
    cout << largest(arr);
    return 0;
}