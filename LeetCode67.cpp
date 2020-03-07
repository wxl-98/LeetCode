/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode67.cpp
*       &Created Time:  2020年03月07日 星期六 16时49分23秒  CST  Day/067 and Week/09 of this year
*       &Description:
***********************************************************/


char * addBinary(char * a, char * b){
    int p = strlen(a);
    int q = strlen(b);
    int len = p > q ? p : q;
    char *ans = (char *)malloc(sizeof(char) * (len + 2));
    ans[++len] = 0;
    char a1, b1, carry = '0';
    while (len > 1 || carry == '1') {
        a1 = p > 0 ? a[--p] : '0';
        b1 = q > 0 ? b[--q] : '0';
        ans[--len] = a1^b1^carry;
        carry = (a1 & carry) | (b1 & carry) | (a1 & b1);
    }
    return ans + len;
}
