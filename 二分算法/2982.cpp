class Solution {
public:
    int maximumLength(string s) {
        auto check=[&](int mid)->bool{
            unordered_map<char,int>haximap;
            for (int i=0;i<s.size();i++){
                int start=i;
                char c=s[start];
                while (s[i]==c){
                    i++;
                }
                if(i-start>=mid){
                    haximap[c]+=i-start-mid+1;
                }
                if (haximap[c]>=3){
                    return true;
                }
            }
            return false;
        };

        int left=0;
        int right=s.size();
        while(left<=right){
            int mid=left+(right-left)/2;
            if (check(mid)){
                left=mid+1;
            }
            else{
                right=left-1;
            }
        }
        return right;
    }
};//
// Created by 华为 on 2026/10/4.
//
