// Check If Given Number Is Prime.


#include<bits/stdc++.h>
using namespace std;

int main() {
  
  int n; 
  
  cin >> n;

  vector<int> divisors;
  
  for(int i = 1; i * i <= n; i++){
      
      if(n % i == 0){
          
          divisors.push_back(i);

          if(i != n / i){

            divisors.push_back(n / i);
          }
      }
  }

  if(divisors.size() == 2){
      
      cout << "Prime" << endl;
  }
  else{
      
      cout << "Not A Prime Number" << endl;
  }
  
  return 0;
}