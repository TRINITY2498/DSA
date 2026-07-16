#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int countChocolates(string s) {
       
       set<char> seen;
       int result = 0;
       
       for(int i = 0; i < s.size(); i++){
           
           if(seen.count(s[i])){
               
               result += 1;
           }
           else{
               
               result += 2;
               
               seen.insert(s[i]);
           }
       }
       
       
       return result;
       
    }
};