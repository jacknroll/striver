#include <iostream>
using namespace std;

int findFactorial(int n)
{

    if (n == 1 || n == 0)
    {

        return 1;
    }
    return n * findFactorial(n - 1);
}

int main()
{

    int n;
    cin >> n;
    int factorial = findFactorial(n);
    cout << factorial;

    return 0;
}