//ncr % mod
/* the approach and ititution behind the problem is the we compute the factorial of elements preferabbly use a factorial array to compute in the best time case or else simple method and calculate the arithmetic 
modulo for the following then use the fermit little theorem and boinary exponisation for the computation of the a^b and finally we compute ncm % m */

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9+7;

ll fact(ll x){
    ll ans = 1;
    for(ll i=1;i<=x;i++){
        ans = ans*i %mod;
    }
    return ans;
}

ll binpower(ll a,ll b){
    ll ans = 1;
    while(b>0){
    if(b & 1){
        ans = ans*a %mod;
    }
    a = a*a %mod;
    b >>= 1;
}
return ans;
}

ll inverse(ll x)
{
    return binpower(x,mod-2);
}

ll ncr(ll n,ll r){
    ll ans = fact(n);
    ans = ans*inverse(fact(r)) %mod;
    ans = ans*inverse(fact(n-r)) %mod;
    return (ans%mod + mod)%mod;
}

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
}
