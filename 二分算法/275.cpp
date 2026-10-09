class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        auto check=[&](int h)->bool{
            if(citations[n-h]>=h){
                return true;
            }
            else {
                return false;
            }
        };

        int left=1;
        int right=n;
        while (left<=right){
            int mid=left+(right-left)/2;
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
