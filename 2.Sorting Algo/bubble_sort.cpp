#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int swapped = 0;
/*
void bubble_sort(int arr[], int n)

{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            int temp;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                swapped = 1;
            }
            // if (!swapped)
            //     break;
        }
        if (!swapped)
        break;
    }
}

*/

/*

void bubble_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}
int main()
{
    int arr[] = {1, 2, 0, 10, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n;

    bubble_sort(arr, n);
    // array after sorting
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

*/

int main()
{
    // int arr[] = {13, 46, 24, 52, 20, 9};
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        int visited = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                visited = true;
            }
        }
        if (visited == false)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}