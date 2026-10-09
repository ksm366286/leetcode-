class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hashmap;
        for (int j=0;j<nums.size();j++){
            auto it=hashmap.find(target-nums[j]);
            if (it != hashmap.end()){
                return {it->second,j};
            }
            hashmap[nums[j]]=j;
        }
        return {};
    }
};//
// Created by 华为 on 2026/10/5.
//
