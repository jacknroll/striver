#include<iostream>
#include<vector>
using namespace std;

void moveZerosToEnd(vector<int> &nums){
    int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                int temp=nums[i];
                nums[i]=numsuse[n-1];
                nums[n-1]=temp;
               n--
            }
        }
}

int main(){
    vector<int> nums={1,2,3,0,5,5,0,0};
    moveZeroesToEnd(vector<int> &nums); 
    return 0;
}