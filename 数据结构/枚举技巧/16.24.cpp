class Solution {
public:
    vector<vector<int>> pairSums(vector<int>& nums, int target) {
        unordered_map<int,int>hashmap;
        vector<vector<int>>ans;
        for (int j=0;j<nums.size();j++){
            auto it=hashmap.find(target-nums[j]);
            if (it != hashmap.end()){
                ans.push_back({target-nums[j],nums[j]});
                if (hashmap[target-nums[j]]==1){
                    hashmap.erase(target-nums[j]);
                }
                else{
                    hashmap[target-nums[j]]--;
                }
            }
            else{
                hashmap[nums[j]]++;
            }
        }
        return ans;
    }
};//
// Created by 华为 on 2026/10/5.
//
