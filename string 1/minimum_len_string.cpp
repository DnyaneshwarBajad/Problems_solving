class Solution {
public:
    int minimumLength(string s) {
     unordered_map<char,int>mp;
     for (int i=0;i<s.length();i++){
        mp[s[i]]++;

     }
    int ans=0;
    
     for(auto it :mp){
        if(it.second >2){
            if(it.second%2==0){
                ans+=(it.second-2);
            }else{
                ans+=(it.second-1);
            }
        }
        
        
     }
     return s.length()-ans;
    }
};











class Solution {
public:
    int minimumLength(string s) {
        vector<int>mp(26,0);

        for( char ch:s){
            mp[ch-'a']++;

        }
          int ans=0;
        for( int freq :mp){
            if(freq==0){
                continue;
            }
            if(freq %2==0){
                ans+=2;
            }
            else{
                ans+=1;
            }
        }
        return ans;
    }};