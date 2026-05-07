#include <iostream>
using namespace std;

void printN(int n, int i)
{
    if (i > n)
        return;
    cout << i << endl;
    printN(n, i + 1);
}

int main()
{
    int n;
    cin >> n;
    int i = 1;
    printN(n, i);
}