#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int secLargest(string s) {
        
        set<int> st;
        
        for(int i = 0; i < s.size(); i++){
            
            if(isdigit(s[i])){
                
                st.insert(s[i] - '0');
            }
        }
        
        if(st.size() < 2){
            
            return -1;
        }
        
        auto it = st.end();
        
        it--;
        it--;
        
        return *it;
        
        
        
        
    }  
};