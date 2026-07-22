// Reverse The Number.

#include<bits/stdc++.h>
using namespace std;

int main() {
  
  int n;
  
  cin >> n;
  
  int x = 0;
  
  while(n != 0){
      
      int last = n % 10;
      
      x = (x * 10) + last;
      
      n = n / 10; 
      
  }
  
cout << x << endl;

  return 0;
}