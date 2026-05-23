#include <bits/stdc++.h>
#include <map>
using namespace std;

////Using hashing
/*
int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
        }
    }

    // using hash
    int hash[maxi + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    int trackNumber = 0;

    int hashMax = 0;
    for (int i = 0; i <= maxi; i++)
    {
        if (hashMax < hash[i])
        {
            hashMax = hash[i];
            trackNumber = i;
        }
    }
    cout << trackNumber;
}

*/
// using mapping

/*
int main()
{
    int arr[] = {1, 2, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // declare map
    map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }


    int maxFreq = 0;
    int maxFreqI = 0;
    for (auto x : map)
    {
        if (x.second > maxFreq)
        {
            maxFreq = x.second;
            maxFreqI = x.first;
        }

    }
    cout << maxFreqI;
}

*/



