/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 20.cpp
*       &Created Time:  2020年02月26日 星期三 23时54分01秒  CST  Day/057 and Week/08 of this year
*       &Description:
***********************************************************/


bool isValid(char * s){
    int top = -1, length = strlen(s), flag = 1;
    char *stack = (char *)malloc(sizeof(char) * length);
    while (s[0]) {
        switch (s[0]) {
            case '(' :
            case '[' :
            case '{' : stack[++top] = s[0]; break;
            case ')' : flag = (top != -1 && stack[top--] == '('); break;
            case ']' : flag = (top != -1 && stack[top--] == '['); break;
            case '}' : flag = (top != -1 && stack[top--] == '{'); break;
        }
        if (!flag) break;
        s++;
    }
    free(stack);
    return (flag && top == -1);
}
