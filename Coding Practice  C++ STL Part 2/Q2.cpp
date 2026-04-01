#include <bits/stdc++.h>
using namespace std;

class solution {
  public:
    
    void push(stack<int>& s, int x){
        
        s.push(x);
        
    }
    
    int pop(stack<int>& s){
        
        if(s.empty()){
            
            return - 1;
        }
        
        int x = s.top();
        s.pop();
        
        return x;
        
    }

    bool isEmpty(stack<int>& s){
        
        return s.empty();
        
    }
    int getMin(stack<int>& s){
        
        if(s.empty()){
            
            return -1;
        }
        
        int min = s.top();
        stack<int> temp;
        
        while(!s.empty()){
            
            if(s.top() <= min){
                
                min = s.top();
            }
            
            temp.push(s.top());
            s.pop();
        }
        
        while(!temp.empty()){
            
            s.push(temp.top());
            temp.pop();
        }
        
        return min;
    }
};