#include<bits/stdc++.h>
using namespace std;

void maximum_consecutive_one(vector<int> &nums){
  int streak=0;
  int max=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==1 )
        {
            streak++;
        }else
        {
            streak=0;
        }

        if(streak>max){
            max=streak;
        }

    }
    cout<<max;
        
    }
    

    


int main(){
    vector<int> arr={1,0,1,1,1,0,1,1};
    maximum_consecutive_one(arr);
    return 0;
}