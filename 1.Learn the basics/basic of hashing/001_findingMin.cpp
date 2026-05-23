// finding min value of array
#include <bits/stdc++.h>
using namespace std;

// in array
/*

int main()
{
    int arr[] = {1, 2, 3, 3, 2, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << min;
}

*/

int main()
{
    int arr[] = {1, 1, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // declare map
    map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }

    /*
    int maxFreq = 0;
    for (auto x : map)
    {
        if (x.second > maxFreq)
        {
            maxFreq = x.second;
        }
    }
    */
    // cout << maxFreq;
    int minFreqValue;
    int numbOfFreq = INT_MAX;

    for (auto x : map)
    {
        if (x.second < numbOfFreq)
        {
            numbOfFreq = x.second;
            minFreqValue = x.first;
        }
    }
    cout << "number of frequency of " << minFreqValue << " is " << numbOfFreq;
}