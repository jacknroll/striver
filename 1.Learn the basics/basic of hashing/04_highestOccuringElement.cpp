#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 3, 2, 1, 2,12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    // using hash
    int hash[max] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    
}