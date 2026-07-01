#include<bits/stdc++.h>
using namespace std;

/*
////////////////////brute_force-o(n)/////////////////
vector <int> findingTwosum(vector<int> &nums){
    long long k=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==k){
                return {i,j};
                
            }
        }
    }
    
    
}
*/

vector<int> findingTwoSum(vector<int> &nums)
{
   long long n=nums.size();
   long long k=-8;

   unordered_map<int,int> mpp;

     for(int i=0;i<n;i++)
     {
           mpp[nums[i]]=i;
    }
 
   
    for(int i=0;i<n;i++)
    { 
        int rem=k-nums[i];
        
        
            
            if(mpp.find(rem)!=mpp.end())
            {
                vector<int> ans={i,mpp[rem]};
                if(i!=mpp[rem])
                {

                    return ans;
                }
            }

         }


    }


int main(){
    // vector<int> arr={1,2,3,-1,10};
    // vector<int> arr={3,3};
    // vector<int> arr={3,2,4};
    // vector<int> arr={0,4,3,0};
    vector<int> arr={-1,-2,-3,-4,-5};
    vector<int> a= findingTwoSum(arr);
   cout<<a[0]<<endl;
   cout<<a[1]<<endl;
        return 0;
}