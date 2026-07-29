#include <bits/stdc++.h>
using namespace std;

// Snap Streak.

class solution {
public:
     int longestStreak(string s) {
        
        int current = 0;
        int longest = 0; 
        
        for(char ch : s){
            
            if(ch == '1'){
                
                current = current + 1;
                
                longest = max(longest, current);
            }
            else{
                
                current = 0;
            }
        }
        
        return longest;
    }
};
