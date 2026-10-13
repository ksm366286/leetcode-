class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=-INT_MAX;
        int pre_sum=0;
        int min_pre_sum=0;
        for (int i=0;i<nums.size();i++){
            pre_sum+=nums[i];
            ans=max(ans,pre_sum-min_pre_sum);//本质上如果枚举[0,i-1]实际上就是找这里面的最小值去和现在的前缀和相减，那不如直接去找这个最小值
            min_pre_sum=min(pre_sum,min_pre_sum);//保存i之前的最小前缀和
        }
        return ans;
    }
};// Created by 华为 on 2026/10/12.
//
