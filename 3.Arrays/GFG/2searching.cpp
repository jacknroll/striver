#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element;
    element = 5;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            found = true;
            break;
        }
    }
    if(found){
        cout<<"Element found"<<endl;
        

    }
    else{
cout<<"Element not found"<<endl;
    }
}