#include<bits/stdc++.h>
using namespace std;
 

////////////////////////-O(N) with O(n) space extra///////////////////////
/*
void sortRedBlueWhite(vector<int> &nums)
{
    int n=nums.size();
    vector<int> newArr(3,0);
    
    for(int i=0;i<n;i++){
        newArr[nums[i]]++;
    }
    
    
    for(auto x:newArr){
        cout<<x<<" "<<endl;
    }
    
    int k=0;
    for(int i=0;i<3;i++){
        while(newArr[i]!=0){
            nums[k]=i;
            newArr[i]--;
            k++;
            
            
        }
    }
    
    
    for(auto x:nums){
        cout<<x<<" ";
    }
    
    
    
}
*/

void sortRedBlueWhite(vector<int> &nums)
{
    int n=nums.size();

    int trackI=0; 
    int trackJ=n-1;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            if(i>trackI){

                int temp=nums[trackI];
                nums[trackI]=0;
                nums[i]=temp;
                i--;    
            }
            trackI++;

        }
        
       else if(nums[i]==2 && i<trackJ){
            int temp=nums[trackJ];
            nums[trackJ]=2;
            nums[i]=temp;
            trackJ--;
            i--;
        }

    }
    for(auto x:nums){
        cout<<x<<" ";
    }
    

}

int main()
{
    // vector<int> arr={1,0,2,2,0,1};
    // vector<int> arr={0,0,1,2};
    // vector<int> arr={2,2,0,0};
    vector<int> arr={2,0,2,0};
    sortRedBlueWhite(arr);

    return 0;
}
