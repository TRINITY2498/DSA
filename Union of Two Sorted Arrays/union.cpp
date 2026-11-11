// Union of Two Sorted Arrays.

#include<bits/stdc++.h>
using namespace std;

vector<int> uni(vector<int> &arr1, vector<int> &arr2){
    
    /*
    
    // Brute Force Approach.
    
    // T.C. :- m log x + n log x + x => (m + n) logx.
    
    // S.C. :- x + x => 2X. 
    
    // Both complexities are very large and not efficient.
    
    set<int> s;
    
    for(int num : arr1){
        
        s.insert(num);
    }
    for(int num : arr2){
        
        s.insert(num);
    }
    
    vector<int> ans(s.begin(), s.end());
    
    return ans;
    
    */
    
    // Optimal Approach.
    
    // T.C. :- O(m + n).
    
    // T.C. :- O(x).
    
    int i = 0, j = 0;
    
    vector<int> ans;
    
    while(i < arr1.size() && j < arr2.size()){
        
        if(arr1[i] <= arr2[j]){
            
            if(ans.empty() || ans.back() != arr1[i]){
                
                ans.push_back(arr1[i]);
            } i++;
            
        }
        
        else{
            
            if(ans.empty() || ans.back() != arr2[j]){
                
                ans.push_back(arr2[j]);
            }
            
            j++;
        }
    }
    
    while(j < arr2.size()){
        
        if(ans.empty() || ans.back() != arr2[j]){
            
            ans.push_back(arr2[j]);
        }
        j++;
    }
    
    while(i < arr1.size()){
        
        if(ans.empty() || ans.back() != arr1[i]){
            
            ans.push_back(arr1[i]);
        }
        i++;
    }
    
    return ans;
}

int main() {
  
  int m, n;
  
  cin >> m >> n;
  
  vector<int> arr1(m), arr2(n);
  
  for(int i = 0; i < m; i++){
      
      cin >> arr1[i];
  }
  
  for(int i = 0; i < n; i++){
      
      cin >> arr2[i];
  }
  
  vector<int> ans = uni(arr1, arr2);
  
  for(int num : ans){
      
      cout << num << " ";
  }
  
  return 0;
}