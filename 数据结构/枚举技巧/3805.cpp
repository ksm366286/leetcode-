class Solution {
public:
    long long countPairs(vector<string>& words) {
        unordered_map<string,int>cnt;
        long long ans=0;
        for (int i=0;i<words.size();i++){
            char base=words[i][0];
            for (char & j:words[i]){
                j=(j-base+26)%26;   //取正模的一个典型操作
            }//这一步是精髓，是以第一个字符为起点，把字符串曲线平移到同一初始位置！
            ans=ans+cnt[words[i]];
            cnt[words[i]]++;
        }
        return ans;
    }
};//
// Created by 华为 on 2026/10/5.
//
