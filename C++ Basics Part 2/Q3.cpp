#include<bits/stdc++.h>
using namespace std;

// Array is by default pass by refernce.
 
int increment(int arr[])
 {
     arr[2] = arr[2] + 10;
     cout << "Value of a inside increment: " << arr[2] << endl;
     return arr[2]; 
 }
int main() {
    
     int arr[5] = {1,2,3,4,5};
     increment(arr);
     cout << "Value of a inside main: "<< arr[2] << endl;
    
  return 0;
}