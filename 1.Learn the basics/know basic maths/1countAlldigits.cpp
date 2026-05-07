#include <iostream>
using namespace std;

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