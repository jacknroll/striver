////////////////iterative approach/////////////////////////////

/*
#include <iostream>
#include <vector>
using namespace std;

int findLargestElement(vector<int> &arr)
{
    int max = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    vector<int> arr = {1, 2, 2, 3};
    cout << findLargestElement(arr);
    return 0;
}
    */

//////////////Recursive approach//////////////////////

#include <iostream>
#include <vector>
using namespace std;

int largest(vector<int> &arr)
{
    
}

int main()
{
    vector<int> arr = {1, 2, 2, 3};
    cout << largest(arr);
    return 0;
}