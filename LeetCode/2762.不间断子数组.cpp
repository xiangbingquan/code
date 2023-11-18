#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    return 0;
}
/*
 * @lc app=leetcode.cn id=2762 lang=cpp
 *
 * [2762] 不间断子数组
 */

// @lc code=start
class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        multiset<int>res;
        long long ans=0;
        for(int right=0,left=0;right<nums.size();right++)
        {
            res.insert(nums[right]);
            while(*(res.rbegin())-*(res.begin())>2)
            {
                res.erase(res.find(nums[left++]));
            }
            ans+=right-left+1;
        }
        return ans;

    }
};
// @lc code=end

