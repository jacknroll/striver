#include<bits/stdc++.h>

using namespace std;


/////////////// BRUTE FORCE-O(N),O(1)///////////////////
/*
int findMissingNumber(vector<int> &nums){
    int n=nums.size();
    int missingNum=-1;
    for(int i=0;i<n;i++)
    {
        bool missing=false;
        
        for(int j=0;j<n;j++)
        {
            if(i==nums[j]){
                missing=true;
            }
        }
        if(missing==false){
            return i;
        }
        
        
    }
    
    
    return n;
    
}

*/






/////////////////HASHING METHOD//////////
/*
int findMissingNumber(vector<int> &nums){ 
    int n=nums.size();
    
    //LETS CREATE AN HASH
    vector<int> hash(n+1,0);
    for(int i=0;i<n;i++){
        hash[nums[i]]++;
    }
    
    for(int i=0;i<n+1;i++){
        if(hash[i]==0){
            return i;
        }
    }
    
    
}
*/


/////////////////////////////////XOR METHOD////////////////////////
int findMissingNumber(vector<int> &nums){
    int xorOneIs=0;
    for(int i=0;i<nums.size();i++){
        xorOneIs^=nums[i];
        
    }
    int xorTwoIs=0;
    for(int i=0;i<nums.size()+1;i++){
      xorTwoIs^=i;
    }
    return xorOneIs^xorTwoIs;

}



/////////////////// OPTIMAL METHOD-O(N),O(1)////////////
/*
void findMissingNumber(vector<int> &nums){
    long long sum=0;
    long long n=nums.size();
    for(int i=0;i<n;i++){
        sum+=nums[i];
        
    }
    int totalSum=(n*(n+1))/2;
    cout<<"Missing Number is "<<totalSum-sum;
    
    
}
*/

int main(){
    vector<int> arr={0,1,2,3};

    int missing=findMissingNumber(arr);
    cout<<missing;

   
    return 0;

}