/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode13.cpp
*       &Created Time:  2020年03月04日 星期三 20时05分26秒  CST  Day/064 and Week/09 of this year
*       &Description:
***********************************************************/


int romanToInt(char * s){
    int cnt = 0;
    while (*s) {
        if (*s == 'V') cnt += 5;
        else if(*s == 'L') cnt += 50;
        else if(*s == 'D') cnt += 500;
        else if(*s == 'M') cnt += 1000;
        else if(*s == 'I') cnt = (*(s + 1) == 'V' || *(s + 1) == 'X') ? cnt - 1 : cnt + 1;
        else if (*s == 'X') cnt = (*(s + 1) == 'L' || *(s + 1) == 'C') ? cnt - 10 : cnt + 10;
        else cnt = (*(s + 1) == 'D' || *(s + 1) == 'M') ? cnt - 100 : cnt + 100;
        s++;
    }
    return cnt;
}
