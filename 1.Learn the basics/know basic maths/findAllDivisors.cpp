#include <iostream>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

/*
void findDivisors(int n)
{
    vector<int> arr;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            arr.push_back(i);
        }
    }
    for (int x : arr)
    {
        cout << x << " ";
    }
}

*/
void findDivisors(int n)
{
    vector<int> arr;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            arr.push_back(i);
        }
        if ((n / i) != i)
        {
            arr.push_back(n / i);
        }
    }
    sort(arr.begin(), arr.end());
    
    for (int x : arr)
    {
        cout << x << " ";
    }
}

int main()
{

    int n = 10;
    findDivisors(n);

    return 0;
}