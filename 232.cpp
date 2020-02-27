/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 232.cpp
*       &Created Time:  2020年02月27日 星期四 20时16分22秒  CST  Day/058 and Week/08 of this year
*       &Description:
***********************************************************/


#define MAX_N 100

typedef struct Stack {
    int data[MAX_N];
    int top;
} Stack;

typedef struct {
    Stack s1, s2;
} MyQueue;

/** Initialize your data structure here. */

MyQueue* myQueueCreate() {
    MyQueue *q = (MyQueue *)malloc(sizeof(MyQueue));
    q->s1.top = q->s2.top = -1;  
  //  q-s1.len = q->s2.len = 0;
    //q->s1.size = q->s2.size = 100;
    return q;
}

/** Push element x to the back of queue. */
void myQueuePush(MyQueue* obj, int x) {
    if (obj->s1.top < MAX_N) {
        while (obj->s1.top != -1) {
            obj->s2.data[++(obj->s2.top)] = obj->s1.data[(obj->s1.top)--];
        }
        obj->s1.data[++(obj->s1.top)] = x;
        while (obj->s2.top != -1) {
            obj->s1.data[++(obj->s1.top)] = obj->s2.data[(obj->s2.top)--];
        }
    }
    return ;
}

/** Removes the element from in front of queue and returns that element. */
int myQueuePop(MyQueue* obj) {
    return obj->s1.data[(obj->s1.top)--];
}

/** Get the front element. */
int myQueuePeek(MyQueue* obj) {
    return obj->s1.data[obj->s1.top];
}

/** Returns whether the queue is empty. */
bool myQueueEmpty(MyQueue* obj) {
    return obj->s1.top == -1;
}

void myQueueFree(MyQueue* obj) {
    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/
