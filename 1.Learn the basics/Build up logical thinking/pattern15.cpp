

#include <iostream>
using namespace std;

/*
int main()
{
    int n = 5;
    int sum = 0;
    for (int i = n; i > 0; i--)
    {
        {
            char c;
            c = 'A';
            for (int j = 0; j < i; j++)
            {
                cout << c;
                c++;
            }
            cout << endl;
        }
    }
}
        */

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        {

            for (char c = 'A'; c < 'A' + n - i; c++)
            {
                cout << c;
            }
            cout << endl;
        }
    }
}