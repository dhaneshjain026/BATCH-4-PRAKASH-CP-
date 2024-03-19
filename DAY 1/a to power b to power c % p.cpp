/*You are given four integers - A,B,C, and P. P is a prime number.Find (A^B^C)%P.*/
 
#include<bits/stdc++.h>
using namespace std;
using lli = long long int;

const int mod = 1e9+7;

lli binpow(lli a,lli b,lli p){
     lli ans = 1;
     while(b>0)
     {
         if(b%2==1)
         {
             ans = ans*a %p;
         }
         a = a*a %p;
         b /=2;
     }
     return ans;
}
 
void solve()
{
    lli a,b,c,p;
    cin>>a>>b>>c>>p;
    if( b==0 && c!=0){
        cout<<"1"<<endl;
    }
    else if(a%p ==0 || a == 0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        lli temp = binpow(b,c,p-1);
        lli ans = binpow(a,temp,p);
        cout<<ans<<endl;
    }
}
 
 
signed main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
     
}
