#include<bits/stdc++.h>
using namespace std;

    int longestSubarray(vector<int> &nums){ 
            int maxLength=0;
            int sum=0;
            int n=nums.size();
            int k=3;
            unordered_map<int,int> sumMap;

            for(int i=0;i<n;i++)
            {
                sum=sum+nums[i];
                if(sum==k)
                {
                    maxLength=i+1;
                }
                else
                {

                    if(sumMap.find(sum-k)!=sumMap.end())
                    {
                        maxLength=max(maxLength,i-sumMap[sum-k]);
                    }

                else
                {
                    if(sumMap.find(sum)==sumMap.end())
                     {
                           sumMap[sum]=i;
                      }
                    
                } 

                }

            }
            return maxLength;


    }

int main(){
    vector<int> arr={-2,-1,0,1,2};
    int result=longestSubarray(arr);
    cout<<result;
    return 0;

}