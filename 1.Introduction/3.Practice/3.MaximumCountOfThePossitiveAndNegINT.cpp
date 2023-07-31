#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int negCount = 0;
        int posCount = 0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]>0){
                posCount++;
            }
            else if(nums[i]<0){
                negCount++;
            }
        }
        if(negCount>posCount)return negCount;
        else return posCount;
    }
};
int main ()
{
    
    return 0;
}