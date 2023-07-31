#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& v) {
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            if (i != v[i]) {
                return i;
            }
        }
        
        return v.size();
    }
};

int main ()
{
    
    return 0;
}