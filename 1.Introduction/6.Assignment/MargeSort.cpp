    #include<bits/stdc++.h>
    using namespace std;
    const int N = 1e5+7;
    int ar[N];
    void marge(int l, int r, int mid){
        int left_size = mid-l+1;
        int L[left_size+1];
        int right_size = r-mid;
        int R[right_size+1];
    for(int i=l, j = 0 ;i<=mid; j++ ,i++){
        L[j] =ar[i];
    }
    for(int i=mid+1, j = 0 ;i<=r; j++ ,i++){
        R[j] =ar[i];
    };
        L[left_size] = INT_MIN;
        R[right_size] = INT_MIN;
        int lp=0;
        int rp = 0;
    for(int i= l;i<=r;i++){
        if(L[lp]>=R[rp]){
        ar[i]=L[lp];
        lp++;
        }
        else{
        ar[i]=R[rp];
        rp++;
        }
    }}
    void margeSort(int l, int r){
        if(l==r)return;
        int mid = (l+r)/2;
        margeSort(l,mid);
        margeSort(mid+1,r);
        marge(l,r,mid);
    }
    int main ()
    {
        int n;
        cin>>n;
        for(int i = 0; i<n;i++)
        {
            cin>>ar[i];
        }
        margeSort(0,n-1);
        for(int i= 0; i<n; i++){
            cout<<ar[i]<<" ";
        }
        return 0;
    }
