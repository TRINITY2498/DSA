#include<bits/stdc++.h>
using namespace std;

int main() {
  
  // Find GCD / HCF of two Numbers.
  
  int a;
  int b;
  
  cin >> a >> b;
  
  int gcd = 1;
  
  for(int i = 1; i <= min(a,b); i++){
      
      if(a % i == 0 && b % i == 0){
          
          gcd = i;
      }
  }
  
  cout << gcd << endl;
  
  return 0;
}