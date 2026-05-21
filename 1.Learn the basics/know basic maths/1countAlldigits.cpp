#include <iostream>
using namespace std;

/*
int main()
{

    int n = 43039;
    int count = 0;
    if (n == 0)
    count = 1;

    while (n > 0)
    {
        n = n / 10;
        count++;
    }

    cout << count;

    return 0;
}
*/

/*

int main()
{
    int n = 1847;
    int c = 1;

    while (!((n % 10) == n))
    {
        c++;
        n = n / 10;
    }
    cout << c;
}
    */

// Recursion ways to solve counting all digits

int recursionDigits(int n)
{
    if (n < 10)
        return 1;
    return 1 + recursionDigits(n / 10);
}

int main()
{
    int n;
    n = 0;
    int result = recursionDigits(n);
    cout << result;
    return 0;
}