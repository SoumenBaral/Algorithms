#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void marge(int l, int r, int mid,vector<int>& ar){
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
     L[left_size] = INT_MAX;
     R[right_size] = INT_MAX;
     int lp=0;
     int rp = 0;
     for(int i= l;i<=r;i++){
        if(L[lp]<=R[rp]){
            ar[i]=L[lp];
            lp++;
        }
        else{
            ar[i]=R[rp];
            rp++;
        }
     }

}
    void margeSort(int l, int r,vector<int>& ar){
    if(l==r)return;
    int mid = (l+r)/2;
    margeSort(l,mid,ar);
    margeSort(mid+1,r,ar);
    marge(l,r,mid,ar);
}
    vector<int> sortArray(vector<int>& ar) {
        int l = 0;
        int r = ar.size()-1;
        margeSort( l, r ,ar);
        
        return ar;
    }
};
int main ()
{
    
    return 0;
}