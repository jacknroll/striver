#include <iostream>
using namespace std;

/*
int gcd(int x, int y)
{
    if (x == y)
        return x;
        if (x > y)
        return gcd(x - y, y);
    else
        return gcd(x, y - x);
}

*/

/*
int gcd(int x, int y)
{

int gcdValue = 1;
int min;
    if (x > y)
    {
        min = x;
    }
    else
    min = y;
    for (int i = 1; i <= min; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcdValue = i;
        }
    }
    return gcdValue;
}
*/

int gcd(int x, int y)
{
    int gcdValue = 1;
    int min;
    if (x > y)
    {
        min = x;
    }
    else
    {
        min = y;
    }

    for (int i = min; i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcdValue = i;
            break;
        }
    }
    return gcdValue;
}

int main()
{

    int n1 = 20, n2 = 30;
    int x = gcd(n1, n2);
    cout << x;
    return 0;
}
