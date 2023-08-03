#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int binarySearch(vector<int>& v, int l, int r, int t)
    {
        int mid = (l+r)/2;
        while(l<=r){
            if(v[mid]==t)return mid;
            if(v[mid]<t)return binarySearch(v,mid+1,r,t);
            if(v[mid]>t)return binarySearch(v,l,mid-1,t);
        }
        return -1;
    }
    int search(vector<int>& v, int t) {
        int l = 0;
        int r = v.size()-1;
        int result = binarySearch(v,l,r,t);
        return result;
    }
};
int main ()
{
    
    return 0;
}