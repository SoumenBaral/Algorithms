#include<bits/stdc++.h>
using namespace std;
int Search(int v[], int l, int r, int t)
{
    int mid = (l+r)/2;
    while(l<=r){
        if(v[mid]==t)return mid;
        if(v[mid]<t)return Search(v,mid+1,r,t);
        if(v[mid]>t)return Search(v,l,mid-1,t);
    }
    return -1;
}
int main ()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0; i<n;i++){
        cin>>ar[i];
    }
    int l = 0;
    int r = n-1;
    int x ;
    cin>>x;
    int result = Search(ar,l,r,x);
    if(result == -1)cout<<"Not Found"<<endl;
    else{
        cout<<result<<endl;
    }

    return 0;
}
