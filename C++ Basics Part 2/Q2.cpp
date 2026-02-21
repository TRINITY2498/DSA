#include<bits/stdc++.h>
using namespace std;

// int a - pass by value 
// int &a - pass by refernce
 
int increment(int &a)
 {
     a = a + 10;
     cout << "Value of a inside increment: " << a << endl;
     return a; 
 }
int main() {
    
     int a = 3;
     increment(a);
     cout << "Value of a inside main: "<< a << endl;
    
  return 0;
}