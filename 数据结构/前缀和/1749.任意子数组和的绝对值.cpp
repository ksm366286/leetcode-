class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum=0;
        int mx=0;
        int mn=0;
        for (int i=0;i<nums.size();i++){
            sum+=nums[i];
            mx=max(mx,sum);//直接用一个变量保存最大值就可以了，不用数组
            mn=min(mn,sum);
        }
        return mx-mn;
    }
};//
// Created by 华为 on 2026/10/12.
//
