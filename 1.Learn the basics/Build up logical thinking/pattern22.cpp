#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            cout << (2 * n - 2) - j << " ";
        }
        cout << endl;
    }
}
