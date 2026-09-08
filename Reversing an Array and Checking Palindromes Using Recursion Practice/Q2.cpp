// Palindrom of a String.

#include <bits/stdc++.h>
using namespace std;

bool helper(int i, string s){
    
    int n = s.size();
    
    if(i >= n / 2){
        
        return true;
    }
    
    if(s[i] != s[n - i - 1]){
        
        return false;
    }
    
    return helper(i + 1, s);
}

class solution{
public:
    bool checkPalindrome(string s){
        
        return helper(0, s);
        
    }
};