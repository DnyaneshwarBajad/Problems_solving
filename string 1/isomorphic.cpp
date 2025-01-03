//{ Driver Code Starts
// C++ program to check if two strings are isomorphic

#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define MAX_CHARS 256


// } Driver Code Ends
class Solution {
  public:
    // Function to check if two strings are isomorphic.
    bool areIsomorphic(string &s1, string &s2) {

        // Your code here
       unordered_map<char,char>mp,mp1;
       int m=s1.length();
       for(int i=0;i<m;i++){
           char a=s1[i];
           char b=s2[i];
           
           if((mp.find(a)!=mp.end() && mp[a]!=b)|| (mp1.find(b)!=mp1.end() && mp1[b]!=a))
           return 0;
           
           mp[a]=b;
           mp1[b]=a;
           
       }
        return 1;
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    string s1, s2;
    while (t--) {
        cin >> s1;
        cin >> s2;
        Solution obj;
        int r = obj.areIsomorphic(s1, s2);
        if (r) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends