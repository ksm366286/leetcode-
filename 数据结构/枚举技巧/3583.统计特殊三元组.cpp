class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        unordered_map<int,int>cnt1;
        unordered_map<int,int>cnt2;
        for (int s=0;s<n;s++){
            cnt2[nums[s]]++;
        }
        for (int j=0;j<n-1;j++){
            int x=cnt1[nums[j]*2];
            cnt1[nums[j]]++;
            cnt2[nums[j]]--;
            int y=cnt2[nums[j]*2];
            ans+=1LL*x*y;
        }
        return ans%(1000000007);
    }
};//
// Created by 华为 on 2026/10/9.
//
