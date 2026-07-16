#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int totalListeningMinutes(int N,int K,int M,vector<pair<int, string>> &songs,vector<string> &favoriteArtists){
        
        unordered_set<string> favset;
        int total = 0;
        
        for(auto &artist : favoriteArtists){
            
            favset.insert(artist);
        }
        
        for(int i = 0; i < songs.size(); i++){
            
            int duration = songs[i].first;
            string singer = songs[i].second;
            
            if(duration >= K && favset.count(singer)){
                
                total += duration;
            }
        }
        
    return total;
        
        
    }
};