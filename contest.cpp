#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define max_v 1000000007
#define pii pair<ll,ll>
#define pi acos(-1)
#define mod 10000007
using namespace std;
int dirx[]={0,0,1,-1};
int diry[]={1,-1,0,0};
ll lcm(ll a,ll b)
{
    //cout<<a*b<<" "<<__gcd(a,b)<<endl;
    return (a*b)/__gcd(a,b);
}
bool cmp(pii a,pii b)
{
    return ((a.second-a.first)>(b.second-b.first));
}

void solve(){
    string s,s1;
    cout<<"Enter your username: "; cin>>s;
    cout<<endl;
    cout<<"Enter your password: "; cin>>s1;
    cout<<endl;



}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

  int t;cin>>t;while(t--)
    solve();
}
