#include<bits/stdc++.h>
using namespace std;
 bool Search(int v[], int l, int r, int t) {
    while (l <= r) {
        int mid = l+(r-l)/2;

        if (v[mid]==t && v[mid+1]==t) {
            return true;
        } else if (v[mid] < t) {
            l = mid+1;
        } else {
            r = mid-1;
        }
    }
    return false;
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
    bool result = Search(ar,l,r,x);
    if(!result)cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}