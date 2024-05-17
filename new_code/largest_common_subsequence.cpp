/* 查找两个字符串中的最长公共子序列 
======================================================
数据范围：0≤∣str1∣,∣str2∣≤20000≤∣str1∣,∣str2∣≤2000
要求：空间复杂度 O(n2)O(n2) ，时间复杂度 O(n2)O(n2) 
======================================================
输入：
"1A2C3D4B56","B1D23A456A"
返回值：
"123456"
*/


class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * longest common subsequence
     * @param s1 string字符串 the string
     * @param s2 string字符串 the string
     * @return string字符串
     */
    string LCS(string s1, string s2) {
        int len1 = s1.length() + 1;
        int len2 = s2.length() + 1;
        string res = "";
        vector<vector<int> > dp(len1, vector<int>(len2, 0));
        for (int i = 1; i < len1; ++i)
            for (int j = 1; j < len2; ++j)
                if (s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
 
        int i = len1 - 1, j = len2 - 1;
        while (dp[i][j]) {
            if (dp[i-1][j] == dp[i][j-1] && dp[i][j] > dp[i-1][j-1]) {
                res += s1[i - 1];
                --i;
                --j;
            }
            else if (dp[i - 1][j] > dp[i][j - 1])  --i;
            else --j;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};



class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * longest common subsequence
     * @param s1 string字符串 the string
     * @param s2 string字符串 the string
     * @return string字符串
     */
    string LCS(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();
        vector<vector<int>>d(m + 1, vector<int>(n + 1));
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
               d[i][j] = max(d[i - 1][j], d[i][j - 1]);
                if (s1[i - 1] == s2[j - 1]) {
                    d[i][j] = max(d[i][j],d[i - 1][j - 1] + 1);
                }
            }
        }
        string ans;
        int i = m;
        int j = n;
        while (d[i][j]) {
            if(d[i][j]==d[i-1][j]){
                i--;
            }else if (d[i][j]==d[i][j-1]) {
            j--;
            }else if (d[i][j]==d[i-1][j-1]+1) {
            ans+=s1[i-1];
            i--;
            j--;
            }
        }
        if(ans.size()==0){
            return "-1";
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};