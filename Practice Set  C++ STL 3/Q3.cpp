#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    string cleanString(string s) {
        
        stack<char> st;
        
        for(auto c : s){
            
            if(!st.empty() && ((st.top() == 'a' && c == 'b') || (st.top() == 'A' && c == 'B'))){
                
                st.pop();
            }
            
            else{
                st.push(c);
            }
        }
        
        string result = "";
        
        while(!st.empty()){
            
            result += st.top();
            st.pop();
        }
        
        reverse(result.begin(), result.end());
        
        return result;
    }  
};