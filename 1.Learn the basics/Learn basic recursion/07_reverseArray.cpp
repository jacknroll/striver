#include <bits/stdc++.h>
using namespace std;

// not inplace just used a new array
/*
void reverseArray(int arr[], int n)
{
    int array2[n];
    for (int i = n - 1; i >= 0; i--)
    {
        array2[i] = arr[n - i - 1];
    }
    for (int x : array2)
    {
        cout << x << " ";
    }
}
*/

// inplace method
void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);

    return 0;
}