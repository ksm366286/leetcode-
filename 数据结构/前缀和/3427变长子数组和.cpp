class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int sum=0;
        vector<int>s{};
        s.resize(nums.size()+1);
        for (int i=0;i<nums.size();i++){
            s[i+1]=s[i]+nums[i];
        }

        for (int i=0;i<nums.size();i++){
            int start=max(0,i-nums[i]);
            sum+=s[i+1]-s[start];
        }
        return sum;
    }
};//
// Created by 华为 on 2026/10/12.
//
