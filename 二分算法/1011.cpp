class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        auto check=[&](int m)->bool{
            int need=1;
            int zaizhong=0;
            for (int i:weights){
                if (zaizhong+i>m){
                    need++;
                    zaizhong=i;
                }
                else{zaizhong+=i;}
            }
            if (need>days){
                return false;
            }
            else{
                return true;
            }
        }   ;
        int summ=0;
        for(int j:weights){
            summ+=j;
        }
        int left=*max_element(weights.begin(),weights.end());
        int right=summ;
        while(left<=right){
            int mid=left+(right-left)/2;
            if (check(mid)){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};