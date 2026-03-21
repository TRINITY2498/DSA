#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void operate( vector<pair<int, string>> &pairs) {
        
        int sum_of = 0;
        string string_result = "";
        
        for(int i = 0; i < pairs.size(); i++){
            
            sum_of += pairs[i].first;
            
            string_result += pairs[i].second;
            
        }
        
        cout << sum_of << endl;
        cout << string_result << endl;
        cout << string_result.size() << endl;
        
    }
};
