// Printing 1 to N using Recursion.

/*

#include<bits/stdc++.h>
using namespace std;

int i = 0;

void numbers(int n){
    
    if(i == n){
        
        return;
    }
    i++;
    cout << i << endl;
    numbers(n);
}

int main() {
  
  int n;
  
  cin >> n;
  
  numbers(n);
  
  return 0;
}

*/

#include<bits/stdc++.h>
using namespace std;

void print(int i, int n){
    
    if(i == n + 1){
        
        return;
    }
    cout << i << endl;
    print(i + 1, n);
}

int main() {
  
  int n;
  
  cin >> n;
  
  print(1, n);
  
  return 0;
}