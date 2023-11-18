#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    return 0;
}
/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] N 字形变换
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
        {
            return s;
        }
        vector<vector<char>>res(numRows);
        int k=0;
        int rows=0;
        int flag=0;
        for(int k=0;k<s.size();k++)
        {
            if(rows==-1)
            {
                flag=0;
                rows+=2;
            }
            if(rows==numRows)
            {
                rows-=2;
                flag=1;
            }
            res[rows].push_back(s[k]);
            if(!flag)
            {
                rows++;
            }
            else
            {
                rows--;
            }
        }
        string ans;
        for(auto x:res)
        {
            for(auto m:x)
            {
                ans.push_back(m);
            }
        }
        return ans;
    }
};
// @lc code=end

