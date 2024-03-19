/*Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear
only once. You can return the answer in any order.
You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9+7;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    
    int res = 0;
    for(int i=0;i<v.size();i++){
        res ^= v[i];
    }
    
    ll lowest = (1LL*res & (1LL*-1*res));
    int first = 0;
    int second = 0;
    
    for(int i=0;i<v.size();i++){
        if((lowest & v[i])==0){
            first ^= v[i];
        }
        
        else{
            second ^= v[i];
        }
    }
    
    cout<<first<<" "<<second<<"\n";
    
}

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
