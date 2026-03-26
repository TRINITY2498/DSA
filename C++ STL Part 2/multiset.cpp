#include<bits/stdc++.h>
using namespace std;

int main() {
  
  multiset<int> mset;
  
  mset.insert(3);
  mset.insert(7);
  mset.insert(3);
  mset.insert(3);
  mset.insert(7);
  
  mset.erase(7);
  mset.erase(mset.find(3));
  
  int count = mset.count(3);
  // other functions are similar to that of set.
  
  return 0;
}