//generate a pascal triangle with space optimisation  using binomial coefficiants

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9+7;


void solve(){
    int t;
    cin>>t;
    while(t--){
        int r;
        cin>>r;
        int co=1;
        for(int i=0;i<r;i++){
            for(int s=1;s<=r-i;s++){
                cout<<" ";
            }
            
            for(int j=0;j<=i;j++){
                if(i==0 || j==0){
                    co=1;
                }
                
                else{
                    co=co*(i-j+1)/j;
                }
                
                cout<<co<<" ";
            }
            
            cout<<endl;
        }
    }
}
 
int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
