#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> targetIndices(vector<int>& v, int target) {
        sort(v.begin(), v.end());
        vector<int>targetIndx;
        for(int i = 0; i<v.size();i++){
            if(v[i]==target){
                targetIndx.push_back(i);
            }
        }
        return targetIndx;
    }
};
int main ()
{
    
    return 0;
}