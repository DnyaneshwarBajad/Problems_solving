#include<iostream>
#include<vector>
using namespace std;

//memoziation
class Solution {

public:
int robbery(int n,vector<int> &nums,vector<int> &dp){
    if(n==0){
        return nums[0];
    }
    if(n==1){
        return max(nums[0],nums[1]);
    }
    if(dp[n]!=-1){
        return dp[n];
    }

    return dp[n]= max(nums[n]+robbery(n-2,nums,dp),robbery(n-1,nums,dp));
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
       if (n == 1) return nums[0];
        return robbery(n-1,nums,dp);
    }
};


int main(){


  Solution sol;
  vector<int>num={1,3,44,5,33,22,11};

  cout<<"maximum sum "<<sol.rob(num);

  return 0;
}