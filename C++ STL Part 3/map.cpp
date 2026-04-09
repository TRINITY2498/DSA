#include<bits/stdc++.h>
using namespace std;

int main() {
  
  // key-value pair
  // keys are sorted and unique 
  
  map<int, int> m1;
  map<int, pair<int, int>> m2;
  map<pair<int, int>, int> m3;
  map<char, string> m4;
  
  m1[1] = 3;
  m1.insert({7,5});
  m1.emplace(4,8);
  m1.emplace(4,9);
  
  for(auto i : m1){
      
      cout << i.first << " " << i.second << endl;
  }
  
  cout << m1[4] << endl; // 8 
  cout << m1[10] << endl; // or Null 
  
  auto iter = m1.find(7);
  cout << (*iter).second << endl; // 5 
  
  auto iter_1 = m1.find(10); // return m1.end()
  
// Multimap - Duplicate keys. Sorted order.
// Unordered Map - Unique Keys, Randomized Order. O(1) in almost all the cases.
// Worst Case - O(N)
  
  return 0;
}