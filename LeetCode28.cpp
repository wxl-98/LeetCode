/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode28.cpp
*       &Created Time:  2020年03月03日 星期二 17时11分20秒  CST  Day/063 and Week/09 of this year
*       &Description:
***********************************************************/


int strStr(char * haystack, char * needle){
    int len1 = strlen(needle);
    int len2 = strlen(haystack);
    char *p = NULL;
    if (len1 == 0) return 0;
    p = haystack;
    int len = len2 - len1;
    for (int i = 0; i <= len; i++) {
        if (haystack[i] == needle[0]) {
            if (!strncmp(p, needle, len1)) return i;
        }
        p++;
    }
    return -1;
}
