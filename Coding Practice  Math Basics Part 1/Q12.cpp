#include<bits/stdc++.h>
using namespace std;

// Count Repeating Digits.

class solution {
public:
    int countRepeatingDigits(int num) {
        
        int ans = 0;
        
        int count[10] = {0};
        
        while(num != 0){
            
            int digit = num % 10;
            num = num / 10;
            
            count[digit]++;
        }
        
        for(int i = 0; i < 10; i++){
            
            if(count[i] > 1){
                
                ans++;
            }
        }
        
        return ans;
        
    }

};