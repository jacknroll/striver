#include <bits/stdc++.h>
using namespace std;

/*

int main()
{
    // DECLARING STRING FIRST
    string s;
    s = "abcdabeg";



    // Lets define hash array
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }



    // retrieve for how many b
    cout <<hash['b'-'a'];
}
*/

int main()
{
    string s;
    s = "abcdabeg";

    // declare hash
    int hash[26] = {0};

    // store
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
    // retrieve b
    cout << hash['a' - 97];
}