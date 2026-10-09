class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n=nums.size();
        long long ans=(long long)n*(n-1)/2;
        unordered_map<int,int>hashmap;
        for (int j=0;j<nums.size();j++){
            int x=nums[j]-j;
            ans=ans-hashmap[x];   //正难则反！！！
            hashmap[x]++;
        }
        return ans;
    }
};//
// Created by 华为 on 2026/10/5.
//
