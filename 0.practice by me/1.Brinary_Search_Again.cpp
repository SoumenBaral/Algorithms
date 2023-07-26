#include<bits/stdc++.h>
using namespace std;
int search(int ar[],int l,int r ,int x){
    int mid = l +(r-1)/2;
    if(l<=r){
        if(ar[mid] == x) return mid;
        if(ar[mid]>x) return search(ar,l,mid-1,x);
        if (ar[mid]<x) return search(ar,mid+1,r,x);

    }
     return -1;
}
int main ()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0 ; i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    //  for(int i = 0 ; i<n;i++){
    //     cout<<ar[i]<<" ";
    // }
    int x;
    cin >>x;
    int l = 0;
    int r = n-1;
    int result = search(ar,l,r,x);
    if(result == -1)cout<<x<<" is not found"<<endl;
    else cout<<x<<" is found Man"<<endl;
    return 0;
}