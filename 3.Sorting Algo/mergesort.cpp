
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(arr) {
    vector<int> temp;
    int left=low;
    int right=mid+1;
    

}

void merge_sort(int arr[], int low, int high)
{
    if (low == high)
        return;
    int mid = low + high / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int arr[] = {1, 12, 15, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    merge_sort(arr, 0, n);

    /*
    // array after sorting
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    */
    return 0;
}