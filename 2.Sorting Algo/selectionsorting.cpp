// #include <stdio.h>
// #include <bits/stdc++.h>
// using namespace std;

// void selection_sort(int arr[], int n)
// {

//     for (int j = 0; j < n - 1; j++)
//     {
//         int mini = j;

//         for (int i = j; i < n; i++)
//         {
//             if (arr[i] < arr[mini])
//             {

//                 mini = i;
//             }
//         }
//         int temp = arr[mini];
//         arr[mini] = arr[j];
//         arr[j] = temp;
//     }
// }
// int main()
// {

//     int arr[] = {13, 46, 24, 52, 20, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Print array before sorting
//     cout << "Before selection sort: " << "\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";

//     // Call selection sort
//     selection_sort(arr, n);

//     // call after sorting
//     cout << "After selection sort: " << "\n";

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";

//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int minIndex = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[minIndex] > arr[j])
                minIndex = j;
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    // for (int i = 0; i < n; i++)
    // {
        //     int minIndex = i;
    //     for (int j = i; j < n; j++)
    //     {
        //         if (arr[minIndex] > arr[j])
        //             minIndex = j;
    //     }
    //     int temp = arr[minIndex];
    //     arr[minIndex] = arr[i];
    //     arr[i] = temp;
    // }
}

*/
/*
int main()
{
    int arr[] = {12, 129, 239, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n;

    selection_sort(arr, n);
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

    int arr[] = {7, 5, 9, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int max = arr[0];
        int maxI=0;
        for (int j = 0; j < n - i; j++)
        {

            if (max <= arr[j])
            {
                max = arr[j];
                maxI = j;
            }
        }
        int temp;
        temp = arr[maxI];
        arr[maxI] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}