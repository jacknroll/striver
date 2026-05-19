#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string c, int f, int l)
{
    if (f > l)
        return true;

    if (c[f] == c[l - 1])
    {

        return checkPalindrome(c, f + 1, l - 1);
    }
    else
        return false;
}

int main()
{
    string c = "malam";

    int first = 0;
    int last = c.size();
    bool b = checkPalindrome(c, first, last);
    cout << b;
    return 0;
}