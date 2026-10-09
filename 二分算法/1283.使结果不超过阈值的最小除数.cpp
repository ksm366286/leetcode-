class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        auto check=[&](int m)->bool{   //这是lambda函数  格式为：[捕获列表](参数列表->返回类型
            int sum=0;
            for (int x:nums){  //一个一个进行计算
                sum=sum+(x+m-1)/m;//实验不同的除数
                if (sum>threshold){
                    return false;
                }
            }
            return true;
        };

        int left=1;
        int right=ranges::max(nums);
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