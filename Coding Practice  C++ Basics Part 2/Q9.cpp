#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int countVowels(string str) {
        
        int count = 0;
        char chr;
        
        for (int i = 0; i < (str.size()); i++){
            chr = tolower(str[i]);
            if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u'){
                
                count = count + 1;
            }
            
        }
        return count;
        
    }
};