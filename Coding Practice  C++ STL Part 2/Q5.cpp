#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    void addPatient(priority_queue<pair<int, string>>& patients, int severity, string name) {
        
        patients.push({severity,name});
    }
    
    void treatPatient(priority_queue<pair<int, string>>& patients) {
    if(!patients.empty()){    
       auto p = patients.top();
       cout << p.second << endl;
       patients.pop();
    }
    }
    
    void displayNextPatient(priority_queue<pair<int, string>>& patients) {
    if(!patients.empty()){
        auto p = patients.top();
        cout << p.second << endl;
    }
    }
};