/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 3.cpp
*       &Created Time:  2020年02月26日 星期三 23时49分05秒  CST  Day/057 and Week/08 of this year
*       &Description:
***********************************************************/


int lengthOfLongestSubstring(char * s){
    int j, temp = 0, ret = 0, ans = 0;
    for (int i = 0; s[i]; i++) {
        for (j = temp; j < i; j++) {
            if (s[i] == s[j]) {
                if (ans < ret) ans = ret;
                ret = i - j;
                temp = j + 1;
                break; 
            }
        }
        if (j == i) ret++;
        if (ans < ret) ans = ret;
    }
    return ans;
}
