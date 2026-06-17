#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

void moveZerosToEnd(vector<int> &nums){
    int n=nums.size();
      int j=-1;
      for(int i=0;i<n;i++){
        if(nums[i]==0){
            j=i;
            break;
        }
      }
      if(j==-1) return;
      

for (int i = j+1; i < n; i++)
{
    if(nums[i]!=0){
      int temp=nums[i];
      nums[i]=nums[j];
      nums[j]=temp;
        j++;

   }
}
    for(int x:nums){
            cout<<x<<" ";
        }
}

int main(){
    vector<int> nums={13,10};
    moveZerosToEnd(nums); 
    return 0;
}