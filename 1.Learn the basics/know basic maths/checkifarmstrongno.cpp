#include <iostream>
#include <cmath>
using namespace std;

/*
int armstrong(int x)
{
    int finalValue = 0, lastDigit;
    int d = log10(x) + 1;

    while (x > 0)
    {
        lastDigit = x % 10;
        finalValue += pow(lastDigit, d);

        x = x / 10;
    }
    return finalValue;
}

*/

int armstrong(int n)
{
    int length = log10(n) + 1;

    int result = 0;
    int remainder;

    while (n > 0)
    {
        remainder = n % 10;
        result = result + pow(remainder, length);
        n = n / 10;
    }

    return result;
}

int main()
{
    int n = 153;
    int z = armstrong(n);
    if (z == n)
        cout << "true";
    else
        cout << "false";

    return 0;
}