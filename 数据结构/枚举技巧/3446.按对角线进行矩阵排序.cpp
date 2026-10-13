class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid[0].size();
        int j=0;
        for (int k=1;k<n;k++){   //先枚举右上三角形，k是列起点,j是列
            j=k;//j是行
            vector<int>cnt;
            for (int i=0;i<n;i++){
                if (j==n){
                    break;
                }
                cnt.push_back(grid[i][j]);
                j++;
            }
            sort(cnt.begin(),cnt.end());
            j=k;
            for (int i=0;i<n;i++){
                if (j==n){
                    break;
                }
                grid[i][j]=cnt[i];
                j++;
            }
        }
        for (int k=0;k<n;k++){   //先枚举右上三角形，k是行起点,j是行
            j=k;
            vector<int>cnt;
            for (int i=0;i<n;i++){   //i是列
                if (j==n){
                    break;
                }
                cnt.push_back(grid[j][i]);
                j++;
            }
            sort(cnt.begin(),cnt.end(),greater<int>());
            j=k;
            for (int i=0;i<n;i++){
                if (j==n){
                    break;
                }
                grid[j][i]=cnt[i];
                j++;
            }
        }
        return grid;
    }
};//
// Created by 华为 on 2026/10/10.
//
