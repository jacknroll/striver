#include<bits/stdc++.h>
using namespace std;


///////////////////////1.BRUTE_FORCE-O(N'2)////////////////////
/*
int findingLongestSubarray(vector<int> &nums){
    int n=nums.size();
    int lng=0;
    int maxLength=0;
    int k=15;
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=sum+nums[j];
            lng++;
            if(sum==k){
                if(lng>maxLength){
                    maxLength=lng;
                }
            }
        }
        sum=0;
        lng=0;
        
    }
    return maxLength;
    
    
}
*/

//////////////////////2.TWO_pointer_problem--O(n) Tc,0(1)////////////////


/*
int findingLongestSubarray(vector<int> &nums){
    int l=0;
    int r=0;
    int k=15;
    int maxLength=0;
    int sum=0;
    int n=nums.size();
    
    while(r<n)
    {
        sum=sum+nums[r];
        
        while(sum>k &&l<=r)
        {
            sum=sum-nums[l];
            l++;
        }
        
        if(sum==k)
        {
            if(r-l+1>maxLength){
                maxLength=r-l+1;
            }
        }
        r++;
    }
    return maxLength;
    
}

*/



/*
int findingLongestSubarray(vector<int> &nums){
    int l=0;
    int r=0;
    int maxLength=0;
    int sum=0;
    int k=15;
    while(r<nums.size()){
        
    sum=sum+nums[r];
    
    
    while(sum>k)
    {
        sum=sum-nums[l];
        l++;
    }
    if(sum==k)
    {
        if(maxLength<r-l+1)
        {
            maxLength=r-l+1;
        }
        
    }
    r++;
}
return maxLength;
}
*/
















int main(){
    // vector<int> arr={-10,25,20,7,1,9};
    // vector<int> arr={-10,25,20,7,1,9};
    // vector<int> arr={10,-5,10};
    vector<int> arr={6,10   ,-5,5};
    int res=findingLongestSubarray(arr);
    cout<<res;
    return 0;

}