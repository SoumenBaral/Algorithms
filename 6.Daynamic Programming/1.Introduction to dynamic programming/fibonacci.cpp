#include<bits/stdc++.h>
using namespace std;
int Fibo(int n){
    if(n==0||n==1)return 1;
    int ans1 = Fibo(n-1);
    int ans2 = Fibo(n-2);
    return ans1+ans2;
}
int main ()
{
    int n;
    cin>>n;
    int ans = Fibo(n);
    cout<<ans<<endl;
    return 0;
}