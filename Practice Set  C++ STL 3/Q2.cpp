#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    string revTool(string s) {
    
    string result = "";
    
    for(int i = 0; i < s.size(); i++){
        
        result = s[i] + result;
    }    
    return result;
    }  
};