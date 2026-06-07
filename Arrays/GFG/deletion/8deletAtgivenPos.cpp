#include <bits/stdc++.h>
using namespace std;

//built in methods
//o(n),o(1)
void removeElementatPos(vector<int> &arr,int pos){
    arr.erase(arr.begin()+pos-1);
    for(int x:arr){
        cout<<x<<" ";
    }
}
int main()
{
    vector<int> arr={2,2,4,10};
    int pos=2;
    removeElementatPos(arr,pos);
    return 0;
}