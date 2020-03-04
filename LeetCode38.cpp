/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode38.cpp
*       &Created Time:  2020年03月04日 星期三 17时50分46秒  CST  Day/064 and Week/09 of this year
*       &Description:
***********************************************************/


char * countAndSay(int n){
    char *p = (char *)malloc(sizeof(char) * 5000);
    char *tmp = (char *)malloc(sizeof(char) * 5000);
    p[0] = '1';
    p[1] = '\0';
    int len = 1;
    while (--n) {
        int i = 0, j = 0;
        while (i < len) {
            int count = 1;
            char c = p[i++];
            while (i < len && p[i] == c) i++, count++;
            tmp[j++] = count + '0';
            tmp[j++] = c;
        }
        tmp[j] = '\0';
        strcpy(p, tmp);
        len = j;
    }
    return p;
}
