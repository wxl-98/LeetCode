/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 58.cpp
*       &Created Time:  2020年02月26日 星期三 23时56分18秒  CST  Day/057 and Week/08 of this year
*       &Description:
***********************************************************/


class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        if (s.length() == 0) return 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') ans += 1;
            if (s[i] == ' ' && ans != 0) break;
        }
        return ans;
    }
};
