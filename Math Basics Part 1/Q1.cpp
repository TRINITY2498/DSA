#include<bits/stdc++.h>
using namespace std;

// Print Digits of the Number

int main() {
  
  int n;
  
  cin >> n; 
  
  while(n != 0){
      
      int last;
      
      last = n % 10;
      
      cout << last << endl;
      
      n = n / 10;
      
      
  }
  
  return 0;
}