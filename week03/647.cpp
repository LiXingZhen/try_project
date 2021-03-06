class Solution {
public:
    int countSubstrings(string s) {
    // bool dp[s.length()][s.length()];
    // int ans = 0;
    // for(int j = 0; j < s.length();j++)
    // {
    //     for(int i = 0; i <= j; i++)
    //     {
    //         if(s[i] == s[j] && (j - i < 2 || dp[i+1][j-1]))
    //         {
    //             dp[i][j] = true;
    //             ans++;
    //         }
    //     }
    // }
    // return ans;
    // }

    int n = s.size();
        string t = "$#";
        for (const char &c: s) {
            t += c;
            t += '#';
        }
        n = t.size();
        t += '!';

        auto f = vector <int> (n);
        int iMax = 0, rMax = 0, ans = 0;
        for (int i = 1; i < n; ++i) {
            // 初始化 f[i]
            f[i] = (i <= rMax) ? min(rMax - i + 1, f[2 * iMax - i]) : 1;
            // 中心拓展
            while (t[i + f[i]] == t[i - f[i]]) ++f[i];
            // 动态维护 iMax 和 rMax
            if (i + f[i] - 1 > rMax) {
                iMax = i;
                rMax = i + f[i] - 1;
            }
            // 统计答案, 当前贡献为 (f[i] - 1) / 2 上取整
            ans += (f[i] / 2);
        }

        return ans;
    }

};
