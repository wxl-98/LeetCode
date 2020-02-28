/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 9.cpp
*       &Created Time:  2020年02月26日 星期三 23时53分26秒  CST  Day/057 and Week/08 of this year
*       &Description:
***********************************************************/


bool isPalindrome(int x){
    if (x < 0) return false;
    if (x >= 0 && x < 10) return true;
    if (!(x % 10)) return false;
    
    int temp = x; long ans = 0;
    while (x) {
        ans = ans * 10 + x % 10;
        x /= 10;
    }
    if (ans == temp) return true;
    return false;
}
