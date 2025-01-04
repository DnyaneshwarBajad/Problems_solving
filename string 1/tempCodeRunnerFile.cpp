#include<iostream>
#include<string>
using namespace std;

void reverse( string &ans,int i,int j){
   
    if(i>j){
        return;
    }

    swap(ans[i],ans[j]);
    i++;
    j--;
    reverse(ans,i,j);
     