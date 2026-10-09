class Solution {
    int reverse(int x){
        int xx=0;
        while(x>0){
            xx=10*xx+x%10;
            x=x/10;
        }
        return xx;
    }
public:
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int>cnt;
        int ans=INT_MAX;
        for (int j=0;j<nums.size();j++){
            auto it=cnt.find(nums[j]);
            if (it!=cnt.end()){
                ans=min(ans,abs(j-it->second));
            }
            cnt[reverse(nums[j])]=j;
        }
        if(ans==INT_MAX){
            return -1;
        }
        else{
            return ans;
        }
    }
};//
// Created by 华为 on 2026/10/6.
//
