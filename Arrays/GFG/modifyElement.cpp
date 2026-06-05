#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"increase array by some constant value : ";
    for(int i=0;i<n;i++){
        arr[i]+=5;
}
for(int x:arr){
    cout<<x<<" ";
}

}