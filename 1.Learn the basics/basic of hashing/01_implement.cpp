#include <bits/stdc++.h>
using namespace std;

int main()
{

    // First we have an array
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)

    {
        cin >> arr[i];
    }

    // lets create hash array
    int hash[13] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    // for(int i=0;i<n;i++){
    //     cout<<hash[i];
    // }
    // checking the frequency

    int Q;
    cin >> Q;
    while (Q--)
    {
        int number;
        cin >> number;

        cout << hash[number] << endl;
    }
}