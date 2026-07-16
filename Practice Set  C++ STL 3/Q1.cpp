#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    string strCompression(string s) {
        
        char current_char = s[0];
        int count = 0;
        string result = "";
        
        for(int i = 0; i < s.size(); i++){
            
            if(current_char == s[i]){
                count++;
            
            }
            else{
                
                result += current_char;
                result += to_string(count);
                
                current_char = s[i];
                
                count = 1;
            }
        }
        
        result += current_char;
        result += to_string(count);
        
        if(result.size() >= s.size()){
            
            return s;
        }
        
        else{
            
            return result;
        }
        
    }
};