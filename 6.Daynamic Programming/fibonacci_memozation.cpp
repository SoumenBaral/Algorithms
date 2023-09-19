#include<bits/stdc++.h>
#define ll long long 
const ll N = 1e5+5;
ll saved[N];
using namespace std;
ll Fibo(int n){
    if(n==0||n==1)return 1;
    if(saved[n]!=-1){
        return saved[n];
    }
    ll ans1 = Fibo(n-1);
    ll ans2 = Fibo(n-2);
    saved[n]= ans1+ans2;
    return saved[n];
}
int main ()
{
    ll n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        saved[i]=-1;
    }
    ll ans = Fibo(n);
    cout<<ans<<endl;
    return 0;
}