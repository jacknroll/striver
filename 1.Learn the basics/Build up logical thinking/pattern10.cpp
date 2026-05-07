

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // for (int j = 0; j < n; j++)
    // {
    //     for (int i = 0; i < j; i++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int j = n; j > 0; j--)
    // {
    //     for (int i = 0; i < j; i++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < 2 * n - 1; i++)
    {

        for (int j = 0; j < i; j++)
        {
            if (i <= n)
            {

                cout << "*";
            }
        }
        if (i > n)
        {

            for (int k = 0; k < 2 * n - i; k++)
            {
                cout << "*";
            }
        }

        cout << endl;
    }
}