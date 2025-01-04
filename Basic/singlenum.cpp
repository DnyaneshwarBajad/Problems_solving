#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(int i=0;i<nums.size();i++){
       mp[nums[i]]++;

       }
       for(int i=0;i<nums.size();i++){
        if (mp[nums[i]]==1)
           return nums[i] ;
       }
        return 0;
    }


    int singlenumber2(vector<int>& nums){
        int ans=0;
        for(int i=0;i<nums.size();i++){
        ans^=nums[i];

        }
        return ans;
    }
   
};

int main(){

    vector<int> arr={2,3,2,1,3};
    Solution sol;
    int result=sol.singleNumber(arr);
    int result2=sol.singlenumber2(arr);
    cout<<result  <<endl;
    cout<< result2;
    return 0;
}