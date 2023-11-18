#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    return 0;
}
/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    int dp[1100][1100];
    string longestPalindrome(string s) {
        int t=0;
        string ans;
        pair<int,int>res;
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(s[i]==s[j]&&(i-j<=1||dp[j+1][i-1]))
                {
                    if(i==0&&j==2)
                    {
                        cout<<i-j+1<<endl;
                    }
                    dp[j][i]=i-j+1;
                    if(t<dp[j][i])
                    {
                        t=dp[j][i];
                        res={j,i};
                    }
                }
            }
        }
        cout<<t<<endl;
        for(int i=res.first;i<=res.second;i++)
        {
            ans.push_back(s[i]);
        }
        return ans;
    }
};
// @lc code=end

