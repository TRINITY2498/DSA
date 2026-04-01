#include<bits/stdc++.h>
using namespace std;

class solution {
  public:
    void insert(set<int> &s,int x)
    {
        s.insert(x);
        
    }

    void print_contents(set<int> &s)
    {
        for(auto x:s){
            cout << x << " ";
        }
        
        
    }

    void erase(set<int> &s,int x)
    {
        s.erase(x);
        
    }

    int find(set<int> &s,int x)
    {
        if(s.find(x) != s.end()){
            return 1;
        }
        else{
            return -1;
        }
        
    }

    int size(set<int> &s)
    {
        return s.size();
        
    }
};