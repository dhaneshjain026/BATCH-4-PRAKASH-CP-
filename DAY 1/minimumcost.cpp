/* from an given array calculate the amount of items you can purchase with k money for example you have 5 items with costs [1,2,3,4,5] and the cost is 13
  then you have to find the number of elements that are less than 13 and cost less than 13 */

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9+7;


void solve(){
  int t;
  cin>>t;                     //o(n*logn + q*logn) --> total complexity
  while(t--){
      int n,r;
      cin>>n>>r;
      vector<int> v(n);
      for(int i=0;i<v.size();i++){
         cin>>v[i];
      }
      
      sort(v.begin(),v.end());      //o(n*logn)
      
      vector<int> pf = v;
      for(int i=1;i<pf.size();i++){
          pf[i] += pf[i-1];          //o(n)
      }
      
      int ans = (upper_bound(pf.begin(),pf.end(),r)-pf.begin()); //o(logn)
      cout<<ans<<"\n";
  }
}
 
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
