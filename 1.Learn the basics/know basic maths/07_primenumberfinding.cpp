#include <iostream>
using namespace std;

void isPrime(int n)
{
    bool divisior = false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            divisior = true;
        }
    }
    if (divisior == true)
        cout << "Non prime";
    else
        cout << "prime";
}
int main()
{
    int n = 11;
    isPrime(n);
    return 0;
}