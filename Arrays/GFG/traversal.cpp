#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Linear Traversal ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "For each loop ";
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << "Using While loop ";
    int i;
    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;

    cout << "Reversal Traversal ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}