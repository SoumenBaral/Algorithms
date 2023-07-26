#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0; i<n;i++){
        cin>>ar[i];
    }
    int x;
    cin>>x;
    bool flag = false;
    for(int i = 0; i<n; i++){
        if(ar[i]==x){
            flag = true;
            break;
        }
    }
    if(flag)cout<<x<<" is found Man"<<endl;
    else cout<<x<<" is NOT Found.........."<<endl;
    return 0;
}