// Remove Duplicates - II.

#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int removeDup(vector<int>& arr) {
        
        int i = 1;
        
        int count = 1;
        
        for(int j = 1; j < arr.size(); j++){
            
            if(arr[j] == arr[j - 1]){
                
                count++;
            }
            
            if(arr[j] != arr[j - 1]){
                
                count = 1;
            }
            
            if(count <= 2){
                
                arr[i] = arr[j];
                
                i++;
            }
        }
        
        return i;
        
    }
};