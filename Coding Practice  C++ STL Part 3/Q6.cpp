#include <bits/stdc++.h>
using namespace std;

class solution {
public:
     int longestPalindromeLength(vector<string>& words) {
        
        map<string,int> freq;
        
        for(int i = 0; i < words.size(); i++){
            
            freq[words[i]]++;
        }
        
        int length = 0;
        bool alreadypalindrome = false;
        
        for(auto& it :freq ){
            string w = it.first;
            int count = it.second;
            
            string rev = w;
            
            reverse(rev.begin(),rev.end());
            
            if(w == rev){
                length += (count / 2) * 4;
                
                if(count % 2 == 1) alreadypalindrome = true;
            } else if (w < rev && freq.count(rev)){
                length += min(count, freq[rev]) * 4;
            }
        }
        
        if(alreadypalindrome) length += 2;
        return length;
    }
};
