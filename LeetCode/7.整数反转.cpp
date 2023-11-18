#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    return 0;
}
/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int flag=0;
        if(x<0)
        {
            flag=1;
        }
        x=abs(x);
        vector<int>ans;
        while(x)
        {
            ans.push_back(x%10);
            x/=10;
        }
        int res=0;
        for(int i=0;i<ans.size();i++)
        {
            int last=res;
            res=res*10+ans[i];
            if(last>res)
            {
                return 0;
            }
        }
        if(!flag)
        return res;
        else 
        return -res;
    }
};
// @lc code=end

