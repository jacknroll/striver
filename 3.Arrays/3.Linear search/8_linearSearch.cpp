#include<bits/stdc++.h>
#include<vector>
using namespace std;

int linearSearch(vector<int> &nums,int target){
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            return i;

        }
    }
    return -1;

}

int main(){
    vector<int> nums={1,23,4,5,0};
    int target=5;
    int index= linearSearch(nums,target);
    cout<<index;
    return 0;
}