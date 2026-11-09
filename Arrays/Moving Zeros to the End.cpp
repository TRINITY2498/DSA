// Moving Zeros to the end.

#include<bits/stdc++.h>
using namespace std;

/* Brute Force Approach.

// Time : O(2N) = O(N), and Space : O(N).

void moving_zeros(int arr[], int n){
    
    vector<int> temp;
    
    for(int i = 0; i < n; i++){
        
        if(arr[i] != 0){
            
            temp.push_back(arr[i]);
        }
    }

    int j = 0;
    for(auto k : temp){
        
        arr[j] = k;
        j++;
    }
    
    for(int i = temp.size(); i < n; i++){
        
        arr[i] = 0;
    }
}

*/

// Optimal Approach. Two Pointers.

// Time : O(N). Space : O(1).

void moving_zeros(int arr[], int n){
    
    int i = 0;
    
    for(int j = 0; j < n; j++){
        
        if(arr[j] != 0){
            
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

int main() {
  
  int n;
  
  cin >> n;
  
  int arr[n];
  
  for(int i = 0; i < n; i++){
      
      cin >> arr[i];
  }
  
  moving_zeros(arr, n);
  
  for(int i = 0; i < n; i++){
      
      cout << arr[i] << " ";
  }
  
  return 0;
}