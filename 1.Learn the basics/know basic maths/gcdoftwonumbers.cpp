#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    if (x == y)
        return x;
    if (x > y)
        return gcd(x - y, y);
    else
        return gcd(x, y - x);
}

int main()
{

    int n1 = 15, n2 = 12;
    int x = gcd(n1, n2);
    cout << x;
    return 0;
}
