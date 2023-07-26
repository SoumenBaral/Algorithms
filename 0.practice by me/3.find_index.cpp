#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // int s(vector<int>& nums, int l , int r, int x){
       
    //     if(l<=r){
    //         int mid = l + (r - l) / 2;
    //         if(nums[mid] == x) return mid;
    //         if(nums[mid]>x) return s(nums,l,mid-1,x);
    //         if(nums[mid]<x)return s(nums,mid+1,r,x);
    //     }
    //     return -1;
    // }
    int search(vector<int>& nums, int target) {
         int n = nums.size();
            int low = 0;
            int high = n - 1;
            while (low <= high)
            {
                int mid = (low + high) / 2;
                if (nums[mid] == target)
                    return mid;
               	//Index found
                else if (nums[low] <= nums[mid])
               	//Left half
                {
                    if (nums[low] <= target && target <= nums[mid])
                    {
                    //right half eliminated
                        high = mid - 1;
                    }
                    else
                   	//left half eliminated
                    {
                        low = mid + 1;
                    }
                }
                else
                {
                   	//right half
                    if (nums[mid] <= target && target <= nums[high])
                   	//left half eliminated
                    {
                        low = mid + 1;
                    }
                   	//right half eliminated
                    else
                    {
                        high = mid - 1;
                    }
                }
            }
            //Index not found
            return -1;
        
    }
};
int main ()
{
    
    return 0;
}