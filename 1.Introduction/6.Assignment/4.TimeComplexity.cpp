#include<bits/stdc++.h>
using namespace std;
int main ()
{
    // (a)Time Complexity is O(NlogN)
    int n; cin>>n;
    int count = 0;
for (int i = n; i > 0; i /= 2) 
{
    for (int j = 0; j < n; j+=5) 
   {
        count += 1;
    }
}

// (b) Time Complexity is O(√N)


for(int i =1; i*i<n; i++)
{
     cout << 'Hello ';
}

// (c)Time Complexity is O(√NlogN)


for(int i =1; i<n; i=i*2)
{
   for(int j=1; j*j<n; j+=2)
  {
      cout << 'Hello ';
   }
}

// (d) Time Complexity is O(√N)
int m = 1;
for(int i=0; m<=n; i++)
{
    m+=i;
}



    return 0;
}