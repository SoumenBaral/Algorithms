#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	sort(arr.begin(),arr.end());
	int a;
	for(int i = 0; i<n-1; i++){
		if(arr[i]==arr[i+1])a=arr[i];
	}
	return a;
}

int main ()
{
    
    return 0;
}