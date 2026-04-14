#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    string canFormPalindrome(string s, string t) {
        
        if(t.size() > s.size()) swap(s, t);
       
       map<char, int>freq;
       
       for(int i = 0; i < s.size(); i++){
           freq[s[i]]++;
       }
       
       for(int j = 0; j < t.size(); j++){
           
           freq[t[j]]--;
       }
       
       int odd = 0;
       
       for(auto x : freq){
           
           if(x.second < 0) return "NO";
           if(x.second % 2 != 0) odd++;
       }
       
       if(odd <= 1){
           
           return "YES";
       }
       
       else{
           
           return "NO";
       }
       
    }
};