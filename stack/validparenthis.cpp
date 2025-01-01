#include<iostream>
#include<stack>
#include<string>

using namespace std;


bool is_valid(string s){
    stack<char>st;
    for(char c : s){
        if(c=='('|| c=='{'|| c=='[')
        {
                st.push(c);
        }
        else{

            if(st.empty() || (c==']' && st.top()!='['
            || c=='}' && st.top()!='{' || c==')' && st.top()!='('
            ) ){
                return 0;
            }
            st.pop();
        }
       
    }
     return st.empty();
}

int main(){
    string s = "(){}}[]";

    if(is_valid(s)){
        cout<<"valid\n";
    }
    else{
        cout<<"invalid\n";
    }
    return 0;
}