class Solution {
public:
    int maxPointsInsideSquare(vector<vector<int>>& points, string s) {
        int res=0;
        auto check=[&](int mid)->bool{
            unordered_map<char,int>haximap;
            for (int i=0;i<points.size();i++){
                if (max(abs(points[i][0]), abs(points[i][1]))<=mid){
                    haximap[s[i]]++;

                    if (haximap[s[i]]>1){
                        return false;
                    }
                }
            }
            res=haximap.size();
            return true;
        };

        int left=0;
        int right=1e9+1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if (check(mid)){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return res;
    }
};//
// Created by 华为 on 2026/10/4.
//
