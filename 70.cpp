/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 70.cpp
*       &Created Time:  2020年02月26日 星期三 23时58分40秒  CST  Day/057 and Week/08 of this year
*       &Description:
***********************************************************/


int climbStairs(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    int a = 1, b = 2, c = 0;
    n = n - 2;
    while (n--) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
