#include <bits/stdc++.h>
using namespace std;

// library method
/*

int main(){
    vector<int> arr={1,2,3,4,5};
    int element=50;
    cout<<"Original array: "<<endl;
    for(int x:arr){
        cout<<x<<" ";
    }

    cout<<"After insertion: "<<endl;
    arr.insert(arr.begin(),element);
for(int x:arr){
        cout<<x<<" ";
    }




}
    */

// custom method
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int element = 50;
    arr.push_back(0);

    for (int i = arr.size()-1; i > 0; i--)
    {

        arr[i] = arr[i - 1];
    }

    arr[0] = element;

    for (int x : arr)
    {
        cout << x << " ";
    }
}
