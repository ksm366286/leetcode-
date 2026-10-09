class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>cnt;
        int ans=0;
        for (int i=0;i<time.size();i++){
            ans+=cnt[(60-time[i]%60)%60];//完美利用模的性质！
            cnt[time[i]%60]++;
        }
        return ans;
    }
};//
// Created by 华为 on 2026/10/6.
//
