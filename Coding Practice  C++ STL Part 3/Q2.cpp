#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    void countWords(map<string, int>& wordCount, const string& paragraph) {
        string word = "";
        for(int i = 0; i <= paragraph.size(); i++){
            
            if(paragraph[i] == ' ' || i == paragraph.size()){
                wordCount[word]++;
                word = "";
            }
            else{
                word += paragraph[i];
            }
        }
        
    }
    
    void displayWordCount(const map<string, int>& wordCount) {
        
        for(auto x : wordCount){
            
            cout << x.first << "-" << x.second << endl;
        }
        
    }
};