

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     for (int k = 0; k < n - i; k++)
    //     {
    //         cout << " - ";
    //     }
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 0; k < 2 * n - 2 * (i + 1); k++)
        {
            cout << "-";
        }
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}