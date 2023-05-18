#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            
            int f=target-nums[i];
            // cout<<"Value: "<<f<<endl;
            
          int check= binarysearch(nums,f,i+1,nums.size()-1);
            
            if(check!=-1)
            {
                  ans.push_back(nums[i]);
                  ans.push_back(check);
              
                break;
            }
            
            
        }
        
        cout<<ans.size()<<endl;
        cout<<ans[0]<<endl;
        cout<<ans[1]<<endl;
        
    }
    
    
    
    int binarysearch(vector<int>&nums,int target,int start,int end){
        if(start<=end){
            
             int mid=(start+end)/2;
            
            if(nums[mid]==target)
        {
            // cout<<"Sucessful:"<<nums[mid]<<endl;
            return nums[mid];
        }
        else if(nums[mid]>target)
        {
        
            return binarysearch(nums,target,start,mid-1);
        }
        else {
            return binarysearch(nums,target,mid+1,end);
        }
        }
        return -1;
      
    }
};


int main(){
    cout<<"Usage: "<<endl;
    Solution check;
    vector<int> array;
    for(int i=0;i<1000;i++){
        array.push_back(i);
    }
    check.twoSum(array,1999);
}