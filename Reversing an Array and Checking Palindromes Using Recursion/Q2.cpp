// Checking Wheter String is Palindrome.

#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(int i, string s){
    
    if(i >= (s.size() / 2)){
        
        return true;
    }
    
    if(s[i] != s[s.size() - i - 1]){
        
        return false;
    }
    
    return is_palindrome(i + 1, s);

}

int main() {
    
    string s;
    
    getline(cin, s);
    
    cout << is_palindrome(0, s);
    
  return 0;
}