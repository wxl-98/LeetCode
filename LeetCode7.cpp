/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 7.cpp
*       &Created Time:  2020年02月26日 星期三 23时49分48秒  CST  Day/057 and Week/08 of this year
*       &Description:
***********************************************************/


class Solution {
public:
    int reverse(int x) {
        int max = 0x7fffffff, min = 0x80000000;
        long long temp = 0;
        while (x) {
            temp = temp * 10 + x % 10;
            x /= 10;
        }
        return temp > max || temp < min ? 0 : temp;
    }
};
