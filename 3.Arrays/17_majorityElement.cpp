#include<bits/stdc++.h>
using namespace std;


/////////////////////////Brute force,hashing,O(N+maxElement)////////////////
/*
void majorityElement(vector<int> &nums){
    int n=nums.size();
    int maxElem=*max_element(nums.begin(),nums.end());
    vector<int> newArr(maxElem+1,0);
    for(int i=0;i<n;i++){
        newArr[nums[i]]++;
    }
    // for(auto x:newArr){
        //     cout<<x<<" ";
        // }
        
        int major=0;
        for(int j=0;j<maxElem+1;j++){
            if(newArr[j]>newArr[major]){
                major=j;
            }
        }
        if(newArr[major]>n/2){
            
        cout<<major;
    }
    else{
        cout<<-1;
    }
    
}
*/

//////////////////////////////-O(N) and O(N) hashmap/////////

/*
void majorityElement(vector<int> &nums){
    int n=nums.size();
    unordered_map<int,int> mpp;
    
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
        
    }
    //    for(auto x:mpp){
        //     cout<<x.first<<" is "<<x.second<<" "<<endl;
        //    }
        
        auto it = mpp.begin();
        
        int major = it->first; 
        for(auto x:mpp){
            if(x.second>mpp[major]){
                major=x.first;
            }
        }
        cout<<major;
    }
    
    */

    ///////////////




    int main(){
        // vector<int> arr={1,9,1,9,2,9,9,1,9};
        vector<int> arr={1,9,1,9,2,9,1,1};
      
        
        majorityElement(arr);
        return 0;
        
    }