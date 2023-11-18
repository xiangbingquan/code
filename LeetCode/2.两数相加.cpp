#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    return 0;
}
/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int>nums1,nums2;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto root=new ListNode(-1);
        auto now=root;
        int res=0;
        while(l1||l2||res)
        {
            if(l1) res+=l1->val,l1=l1->next;
            if(l2) res+=l2->val,l2=l2->next;
            now->next=new ListNode(res%10);
            now=now->next;
            res/=10;
        }
        return root->next;
    }
};
// @lc code=end

