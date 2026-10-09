class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int,int>hashmap;
        for (int j=0;j<points.size();j++){
            hashmap[points[j][1]]++;
        }
        long long ans=0;
        long long s=0;
        for (auto&[_,c]:hashmap){
            long long k=1LL*c*(c-1)/2;
            ans+=s*k;//新增的水平边乘上原本的水平边数目
            s+=k;//前面已经计算出的可以形成一条水平边的数量
        }
        return ans%1000000007;
    }
};//
// Created by 华为 on 2026/10/5.
//
