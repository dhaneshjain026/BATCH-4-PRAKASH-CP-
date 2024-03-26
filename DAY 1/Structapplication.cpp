/* create a datastructure such that it supports the following operations the operations include the insert , delete , find the max, no of distinct elements ,sum of 
all of them and then the upper bound of them */

//appproach : remember the use of maps,sets,multiset 

#include<bits/stdc++.h>
using namespace std;

struct Bag{
  int cur_sum = 0;
  map<int,int> mp;
  
  void insert(int x){
    mp[x]++;
    cur_sum += x;
  }
  
  void erase(int x){
    cur_sum -= x;
    mp[x]--;
    if(mp[x]==0){
      mp.erase(x);
    }
  }
  
  int get_sum(){
    return cur_sum;
  }
  
  int get_distinct(){
    return mp.size();
  }
  
  int greatest(){
    return mp.rbegin() -> first;
  }
  
  int upperone(int x){
    return mp.upper_bound(x) -> first;
  }
  
};


int main(){
  Bag bg;
  bg.insert(1);
  bg.insert(2);
  bg.insert(3);
  bg.insert(6);
  bg.erase(2);
  cout<<bg.greatest()<<"\n";
  cout<<bg.upperone(2)<<"\n";
  cout<<bg.get_distinct()<<"\n";
}

