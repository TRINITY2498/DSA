// Sum Of N Numbers.

/*

#include<bits/stdc++.h>
using namespace std;

void sum(int i, int s, int n){
    
    if(i == n + 1){
        
        cout << s;
        return;
    }
    
    sum(i + 1, s + i, n);
    
}

int main() {
  
  int n; 
  
  cin >> n;
  
  sum(1, 0, n);
  
  return 0;
}

*/

#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    
    if(n == 1){
        
        return 1;
    }
    
    return sum(n - 1) + n;
}

int main() {
  
  int n;
  
  cin >> n;
  
  cout << sum(n);
  
  return 0;
}