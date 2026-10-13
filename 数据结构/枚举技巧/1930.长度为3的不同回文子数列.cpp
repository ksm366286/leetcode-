class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int ans=0;
        int precnt[26]{};
        int aftercnt[26]{};
        //这里使用了数组而没有使用哈希数组的原因是这里直接用26个数来指代a--z，这样在后面枚举j的时候就避免了从j枚举到i，而是只需要枚举到26就可以了
        for (int i=1;i<s.size();i++){   //初始化i=1避免在后面删除的时候没有删掉第一个数
            aftercnt[s[i]-'a']++;
        }
        bool midafter[26][26]{};   //建立二维数组，默认初始化为false，用于排除重复答案
        for (int i=1;i<s.size();i++){
            aftercnt[s[i]-'a']--;
            precnt[s[i-1]-'a']++;
            for(int j=0;j<26;j++){
                if (precnt[j]>0 and aftercnt[j]>0 and !midafter[s[i]-'a'][j]){
                    ans++;
                    midafter[s[i]-'a'][j]=true;
                }
            }
        }
        return ans;
    }
};