#include<bits/stdc++.h>
using namespace std;

int main() {
  
  set<int> s;
  
  s.insert(3);
  s.insert(7);
  s.insert(5);
  s.insert(3);
  s.insert(5);
  s.insert(1);
  
  auto iter1 = s.find(5);
  auto iter2 = s.find(9);
  
  s.erase(3);
  s.erase(iter1);
  
  set<int> s1 = {2,4,6,8,10};
  auto iter3 = s1.find(4);
  auto iter4 = s1.find(8);
  s1.erase(iter3, iter4);
  
  int count1 = s1.count(8);
  int count2 = s1.count(5);
  
  // Time Complexity log(N) for inserting and erasing 
  // Functions: Size, empty, swap, begin, end, back are similar to
  // that of vector
  
  return 0;
}