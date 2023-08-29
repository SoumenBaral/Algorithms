#include<bits/stdc++.h>
using namespace std;
void marge(int a[],int l, int m ,int r){
    int leftSize = m-l+1;
    int rightSize = r-m;
    int L[leftSize],R[rightSize]; //we make to array to divide an array into two part ;
    int k = 0;
    for (int i = 0; i <= m; i++)
    {
        L[k]=a[i]; //here i start with 0 and end in m that will provide question ;
        k++;
    }
     k = 0;
    for (int i = m+1; i <=r; i++)
    {
        R[k]=a[i];//Here i start with m+1;and k start with 0;
        k++;
    }
    for (int i = 0; i <leftSize ; i++)
    {
        cout<<L[i]<< " ";
    }
    
    

}
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    marge(a,0,3,n-1);
   


    return 0;
}