#include <iostream>
using namespace std;

/*
int main()
{
    int n = 3654;
    int m=0;
    int ans;
    int remainder;
    while (n > 0)
    {
        remainder = n % 10;
        ans = m * 10 + remainder;
        n = n / 10;
        m = ans;
    }
    cout << ans;
}
*/
int ans = 0;

int recursionReverseNumber(int n)
{

    if (n == 0)
        return ans;
    int rem = n % 10;
    ans = ans * 10 + rem;

    return recursionReverseNumber(n / 10);
}

int main()
{
    int n = 1234;
    int result = recursionReverseNumber(n);
    cout << result;
    return 0;
}