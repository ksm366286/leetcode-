class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        auto check=[&](int m)->bool{
            long long count=0;
            for(int i:candies){
                count=count+i/m;
            }
            if (count<k){
                return false;
            }
            else{
                return true;
            }
        }   ;

        int left=1;
        int right=*max_element(candies.begin(),candies.end());
        while (left<=right){
            int mid =left+(right-left)/2;
            if (check(mid)){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return right;
    }
};//
// Created by 华为 on 2026/10/4.
//
