#include<bits/stdc++.h>
using namespace std;

void marge(int ar1[], int ar2[],int n,int m , int r[]){
    int x = 0,y=0,k=0;
    while (x<n && y<m)
    {
        if(ar1[x]>=ar2[y])
        {
            r[k++]=ar1[x++];
        }
        else{
            r[k++]=ar2[y++];
        }
    }
    while(x<n){
        r[k++]=ar1[x++];
    }
    while (y<m){
        r[k++]=ar2[y++];
    }
  
    
}
int main ()
{
    int n,m;
    cin>>n;
    int ar1[n];
    for(int i=0; i<n;i++)
    {
        cin>>ar1[i];
    }
    cin>>m;
    int ar2[m];
    for (int i = 0; i < m; i++)
    {
        cin>>ar2[i];
    }

    int r[n+m];
    marge(ar1,ar2,n,m,r);
    for(int i=0;i<m+n;i++){
    cout<<r[i]<< " ";
   }
    return 0;
}