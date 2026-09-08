// Palindrom With a Twist.

#include <bits/stdc++.h>
using namespace std;

class solution {
public:

    bool ispalindrome(string s, int left, int right){
        
        if(left >= right){
            
            return true;
        }
        
        if(s[left] != s[right]){
            
            return false;
        }
        
        return ispalindrome(s, left + 1, right - 1);
    }
    
    bool canbecomepalindromrecursive(string s, int left, int right){
        
        if(left >= right){
            
            return true;
        }
        
        if(s[left] == s[right]){
            
            return canbecomepalindromrecursive(s, left + 1, right - 1);
        }
        
        int n = s.size();
        
        for(int i = left + 1; i <= right; i++){
            
            if(s[i] == s[right]){
                
                swap(s[left], s[i]);
                
                if(ispalindrome(s, 0, n - 1)){
                    
                    swap(s[left], s[i]);
                    return true;
                }
                
                swap(s[left], s[i]);
            }
        }
        
        for(int i = left; i < right; i++){
            
            if(s[i] == s[left]){
                
                swap(s[i], s[right]);
                
                if(ispalindrome(s, 0, n - 1)){
                    
                    swap(s[i], s[right]);
                    return true;
                }
                
                swap(s[i], s[right]);
            }
        }
        
        return false;
        
    }
    
    bool canBecomePalindrome(string s) {
        
        return canbecomepalindromrecursive(s, 0, s.size() - 1);
        
    }
};