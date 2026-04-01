#include <bits/stdc++.h>
using namespace std;

class solution {
  public:
    void insert(queue<int> &q, int k){
        
        q.push(k);
        
    }
    int findFrequency(queue<int> &q, int k){
        
        int count = 0;
        int size = q.size();
        
        for(int i = 0; i < size; i++){
            
            int front = q.front();
            
            if(front == k){
                
                count += 1;
                
            }
            
       
            
            q.pop();
            q.push(front);

        }
        
        if(count == 0){
            
            return -1;
        }
        
        return count;
    }
};