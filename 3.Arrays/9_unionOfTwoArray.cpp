#include<bits/stdc++.h>
using namespace std;

void unionOfTwoArray(vector<int>&nums1,vector<int>&nums2){
    int n1=nums1.size();
    int n2=nums2.size();

    vector<int> ans;

    int i=0;
    int j=0;

    while(i<n1 && j<n2){

        if(nums1[i]<nums2[j])
        {
            if(ans.empty() || ans.back()!=nums1[i])
            {
                ans.push_back(nums1[i]);
                       
            }
          i++;
           
        }

        else if(nums1[i]>nums2[j]){
             if(ans.empty() || ans.back()!=nums2[j]){
                ans.push_back(nums2[j]);
               
            }
           j++;
           
        }
       
        else if(nums1[i]==nums2[j]){
             if(ans.empty() || ans.back()!=nums1[i])
             {
                ans.push_back(nums1[i]);
                
             }
            
                i++;
                j++;
            
            
        }

        
    }

    
    while(j<n2){
        if(ans.empty() || ans.back()!=nums2[j])
        {
            ans.push_back(nums2[j]);
            
        }
        j++;
       
       
    }
    while(i<n1){
        if(ans.empty() || ans.back()!=nums1[i])
        {
            ans.push_back(nums1[i]);
            
        }
        
        i++;
    }
    
        for(int x:ans){
            cout<<x<<" ";
        }
}

int main(){
    vector<int> arr1={1,2,3,4,5};
    vector<int> arr2={1,2,7};
    unionOfTwoArray(arr1,arr2);
}

    