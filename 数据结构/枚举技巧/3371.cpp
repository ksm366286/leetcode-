class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        long long sum=0;
        int ans=-(INT_MAX-1);
        unordered_map<int,int>cnt;
        for (int i:nums){
            sum+=i;
            cnt[i]++;
        }
        for (int j:nums){
            if ((sum-j)%2==0){
                auto it = cnt.find((sum-j)/2);
                if (it != cnt.end() ){
                    if ((sum-j)/2==j){
                        if (cnt[j]>1){
                            ans=max(ans,j);
                        }
                    }
                    else{
                        ans=max(ans,j);
                    }
                }
            }
        }
        return ans;
    }
};//
// Created by 华为 on 2026/10/6.
//
