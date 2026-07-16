#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    
    int priority(char op){
            if(op == '+' || op == '-') return 1;
            if(op == '*' || op == '/') return 2;
            return 0;
        }
        
        
    string regularAlgebraicExp(string s) {
        
        stack<char> stk;
        string result = "";
        
        for(int i = 0; i < s.size(); i++){
            
            if(isalpha(s[i])){
                
                result += s[i];
            }
            
            else if(s[i] == '('){
                
                stk.push(s[i]);
            }
            
            else if(s[i] == ')'){
                
                while(!stk.empty() && stk.top() != '('){
                    
                    result += stk.top();
                    stk.pop();
                }
                
                stk.pop();
            }
            
            else{
                
                while(!stk.empty() && stk.top() != '(' && priority(stk.top()) >= priority(s[i])){
                    
                    result += stk.top();
                    stk.pop();
                }
                
                stk.push(s[i]);
            }
        }
        
        while(!stk.empty()){
            
            result += stk.top();
            stk.pop();
        }
        return result;
    }
};