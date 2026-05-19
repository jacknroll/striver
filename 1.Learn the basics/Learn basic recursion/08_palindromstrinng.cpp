#include <bits/stdc++.h>
using namespace std;

void palindromOrNot(string s, int l)
{
    string original = s;
    for (int i = 0; i < l / 2; i++)
    {
        int temp = s[i];
        s[i] = s[l - i - 1];
        s[l - i - 1] = temp;
    }
    if (original == s)
        cout << "Yes palindrome";
    else
        cout << "not palindrome";
}

int main()
{
    string s = "malam";
    // cin >> s;
    int length = s.size();
    // cout << length;
    palindromOrNot(s, length);
}