#include<bits/stdc++.h>
using namespace std;

// Count Number Of Digits.

int main() {
  
int n;

cin >> n;

int count = 0;

while(n != 0){
    
    count++;
    
    n = n / 10; 
    
}

cout << count << endl;
 
  
  return 0;
}