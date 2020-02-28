/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 69.cpp
*       &Created Time:  2020年02月26日 星期三 23时58分12秒  CST  Day/057 and Week/08 of this year
*       &Description:
***********************************************************/


int mySqrt(int x){
    int ans = 0;
    long num, a = 0;
    num = a * a;
    while (num <= x) {
        if (num == x) return a;
        else ans = a;
        a++;
        num = a * a;
    }
    return ans;
}
