#include<bits/stdc++.h>
using namespace std;



/////////////////////////1.BRUTE FORCE-0(n'2),O(1)///////////////////////

/*
int findMissingOne(vector<int> &nums){
    int n=nums.size();
    
    for(int i=0;i<n;i++)
    {
        int count=0;
        
        for(int j=0;j<n;j++)
        {
            if(nums[i]==nums[j])
            {
                count++;
                
            }
            
        }
        
        if(count==1){
            return nums[i];
        }
    }
    return -1;
    
}


*/



//////////////////////////////////////////2.SORTING METHOD-0(NLOGN)///////////////////////
/*
int findMissingOne(vector<int> &nums){
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            i++;
        }
        else if(nums[i]!=nums[i+1])
        {
            return nums[i];
        }
    }
    return nums[nums.size()-1];
}

*/

///////////////3.xor based approach-o(n),o(1)/////////////////////////


int findMissingOne(vector<int> &nums){


    int value=0;
    for(int i=0;i<nums.size();i++){
     value= value^nums[i];
    }
    return value;
}












///////////////////////HASHING WAY-O(N)-TC,O(N)-SC////////////////////////
/*
int findMissingOne(vector<int> &nums){
    
int max=*max_element(nums.begin(),nums.end());

vector<int> hash(max+1,0);

for( int i=0;i<nums.size();i++){
    hash[nums[i]]++;
}

for(int i=0;i<max+1;i++){
    if(hash[i]==1){
        return i;
    }
}
return -1;

}
*/


//

int main(){
    vector<int> arr={1,2,4,4,1,2,3};
   int result=   findMissingOne(arr);
   cout<<result;
   return 0;
}