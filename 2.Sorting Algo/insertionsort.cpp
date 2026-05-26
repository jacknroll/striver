#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {

        arr[j + 1] = arr[j];
        j = j - 1;
    }
    arr[j + 1] = key;
}
}

*/

/*
void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {

        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else
                break;
        }
    }
}
    */

/*

void insertion_sort(int arr[], int n)
{
for (int i = 0; i < n; i++)
{
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }
}
}

*/

/*
// wrong approach
void insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            if (arr[i - j + 1] < arr[i - j])
            {
                int temp = arr[i - j + 1];
                arr[i - j + 1] = arr[i - j];
                arr[i - j] = temp;

            }

        }
}

*/
void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)

    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {1, 12, 15, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n;

    insertion_sort(arr, n);
    // array after sorting
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}