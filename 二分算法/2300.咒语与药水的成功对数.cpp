/class Solution {
    int lower_bound(vector<int> &nums,long long target){
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if (nums[mid]>=target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans;
        sort(potions.begin(),potions.end());
        for (int i:spells){
            long long need=(success+i-1)/i;//求两个数相除的上取整
            ans.push_back(potions.size()-lower_bound(potions,need));
        }
        return ans;
    }
};/
// Created by 华为 on 2026/10/4.
//
