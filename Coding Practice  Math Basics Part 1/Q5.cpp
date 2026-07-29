#include <bits/stdc++.h>
using namespace std;

// Checking For Palindromic Numbers.

class solution {
public:
    bool isPalindrome(int n) {
        
        int x = 0;
        int num = n;
        
        while(n != 0){
            
            int last = n % 10;
            
            x = x * 10 + last;
            
            n = n / 10;
        }
        
        if(num == x){
            
            return true;
        }
        else{
            
            return false;
        }
    }
};