#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m ;
    cin>>n;
    int ar1[n];
    for(int i = 0; i<n; i++){
        cin>>ar1[i];
    }
    cin>>m;
    int ar2[m];
    for(int i = 0; i<m; i++){
        cin>>ar2[i];
    }
    for(int i = 0; i<n; i++){
        cout<<ar1[i]<<" ";
    }
    cout<<m<<endl;
    cout<<ar1[3];


    return 0;
}