#include <iostream>
using namespace std;

int main()
{
    int n = 1111;
    int original = n;
    int m = 0;
    int ans;
    int remainder;
    while (n > 0)
    {
        remainder = n % 10;
        ans = m * 10 + remainder;
        n = n / 10;
        m = ans;
    }
    if (ans == original)
        cout << "yes PALINDROME";
    else
    {
        cout << "Not palindrome";
    }
}