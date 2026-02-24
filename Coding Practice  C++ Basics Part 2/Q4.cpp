#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int lengthAfterConcat(int n, string arr[]) {
        
        string s = "";
        
        
        for (int i = 0; i < n; i++){
            
            s = s + arr[i];
            
        }
        
        return s.size();
        
    }
};