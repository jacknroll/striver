#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int j = 0; j < n; j++)
    {

        cout << "*";
    }

    cout << endl;
    for (int j = 0; j < n - 2; j++)
    {
        cout << "*";

        for (int k = 0; k < n - 2; k++)
        {
            cout << " ";
        }
        cout << "*";

        cout << endl;
    }

    
    for (int j = 0; j < n; j++)
    {

        cout << "*";
    }
}