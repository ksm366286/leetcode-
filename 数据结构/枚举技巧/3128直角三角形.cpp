class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        int n=grid[0].size();
        vector<int>col_sum(n,-1);//提前减一
        for (auto&row:grid){
            for (int j=0;j<n;j++){
                col_sum[j]+=row[j];
            }
        }//矩阵的操作，先枚举行，再枚举列，注意这里用数组先存储列的1的数目，后面枚举行的时候再直接计算列的1数目，此时列不需要数组，直接定义一个临时变量就可以了
        long long ans=0;
        for (auto&row:grid){
            int row_sum=reduce(row.begin(),row.end())-1;
            for (int j=0;j<n;j++){
                if (row[j]==1){
                    ans+=row_sum*col_sum[j];
                }
            }
        }
        return ans;
    }
};//
// Created by 华为 on 2026/10/10.
//
