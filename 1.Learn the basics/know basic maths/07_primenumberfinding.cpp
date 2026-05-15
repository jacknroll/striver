#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
void isPrime(int n)
{
    bool divisor = false;
    if (n = 0 || n == 1)
        cout << "Non Prime";
        for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            divisor = true;
        }
    }
    if (divisor == true)
        cout << "Non prime";
        else
        cout << "prime";
    }
    */

// optimized version
void isPrime(int n)
{
    bool divisor = false;
    if (n == 0 || n == 1)
        cout << "Non Prime";
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            divisor = true;
        }
    }
    if (divisor == true)
        cout << "Non prime";
    else
        cout << "prime";
}
int main()
{
    int n = 2;
    isPrime(n);
    return 0;
}