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
     
}
int main(){
    int i=0;
    string stir= "hello";
    int n=stir.length();
    int j=n-1;

    
   reverse(stir,i,j);
   cout<<stir;
   
}