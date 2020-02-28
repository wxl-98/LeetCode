/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 202.cpp
*       &Created Time:  2020年02月27日 星期四 14时53分23秒  CST  Day/058 and Week/08 of this year
*       &Description:
***********************************************************/



//快慢指针
int val(int n) {
    int ans = 0;
    while (n) {
        ans += (n % 10) * (n % 10);
        n /= 10;
    }
    return ans;
}

bool isHappy(int n){
    int a = n, b = n;
    while (b != 1) {  // b是快指针
        a = val(a);
        b = val(val(b));
        if (a == b) break;
    }
    return b == 1;
}
