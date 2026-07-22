#include<bits/stdc++.h>
using namespace std;

// Check If given Number is Palindrom.

int main() {
  
  int n;
  
  cin >> n;
  
  int temp = n;
  
  
  int x = 0;
  
  while(n != 0){
      
      int last = n % 10;
      
      x = (x * 10) + last;
      
      n = n / 10; 
      
  }
  
if(temp == x){
    
    cout << "Palindrome" << endl;
}
else{
    
    cout << "Not Palindrome" << endl;
}

  return 0;
}