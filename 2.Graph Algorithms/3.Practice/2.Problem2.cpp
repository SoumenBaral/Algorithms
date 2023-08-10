#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int ar[n][n];
    for(int i=1;i<=n;i++){
        for(int j= 1; j<=n;j++){
            int x;
            cin>>x;
            ar[i][j]=x;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<"Node  "<<i<<" : ";
        for(int j=1; j<=n;j++){
            if(ar[i][j]==1){
                cout<<j<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}