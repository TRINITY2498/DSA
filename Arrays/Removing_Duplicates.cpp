// Removing Duplicates in array.

#include<bits/stdc++.h>
using namespace std;

// Two Pointers Approach.
// Time : O(N) and Space : O(1).

int remove_duplicates(int arr[], int n){
    
    int i = 0; 
    
    for(int j = 1; j < n; j++){
        
        if(arr[i] != arr[j]){
            
            arr[i + 1] = arr[j];
            i++;
        }
    }
    
    return i + 1;
}

/*

// Time : O(N Log N + N) and Space : O(N).

// Better Approach.

int remove_duplicates(int arr[], int n){
    
    set<int> s;
    
    for(int i = 0; i < n; i++){
        
        s.insert(arr[i]);
    }
    
    int j = 0; 
    
    for(auto k : s){
        
        arr[j] = k;
        j++;
    }
    
    return s.size();
}

*/

int main() {
  
  int n;
  
  cin >> n;
  
  int arr[n];
  
  for(int i = 0; i < n; i++){
      
      cin >> arr[i];
  }
  
  cout << remove_duplicates(arr, n) << endl;
  
  for(int i = 0; i < n; i++){
      
      cout << arr[i] << " ";
  }
  
  return 0;
}