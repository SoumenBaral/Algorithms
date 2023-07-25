#include<bits/stdc++.h>
using namespace std;
// int binarySearch(int ar[],int l,int r, int x){
//     if(l<=r)
//     {
//     int mid = l+(r-1)/2;
//     if(ar[mid] == x) return mid;
//     if(ar[mid] >x)return binarySearch(ar,l,mid-1,x);
//     if(ar[mid] <x)return binarySearch(ar,mid+1,r,x);
//     }
// return -1;
// }
int binarySearch(int ar[], int l, int r, int x) {
    if (l <= r) {
        int mid = l + (r - l) / 2;

        if (ar[mid] == x)
            return mid;

        if (ar[mid] > x)
            return binarySearch(ar, l, mid - 1, x);

        return binarySearch(ar, mid + 1, r, x);
    }

    return -1; // Element not found
}

int main ()
{
    int n;
    cin>>n;
    int ar[n];

    for(int i = 0; i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    // for(int i = 0;i<n;i++){
    //     cout<<ar[i]<<' ';
    // }
    int l = 0;
    int r = n-1;
    int x ;
    cin>>x;
    int result = binarySearch(ar,l,r,x);
    if(result == -1)cout<<x<<" is not found"<<endl;
    else{
        cout<<x<<" is found Man i am so happy to find it "<<endl;
    }
    
    return 0;
}