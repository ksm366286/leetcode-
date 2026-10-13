class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>s(arr.size()+1,0);
        for (int i=0;i<arr.size();i++){
            s[i+1]=s[i] xor arr[i];
        }
        vector<int>ans;
        for (int j=0;j<queries.size();j++){
            int left=queries[j][0];
            int right=queries[j][1];
            ans.push_back(s[right+1] xor s[left]);
        }
        return ans;
    }
};//
// Created by 华为 on 2026/10/12.
//
