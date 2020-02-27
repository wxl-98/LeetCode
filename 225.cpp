/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 225.cpp
*       &Created Time:  2020年02月27日 星期四 19时23分16秒  CST  Day/058 and Week/08 of this year
*       &Description:
***********************************************************/
//用队列实现栈

typedef struct MyQueue{
    int *data;
    int head, tail;
    int size, cnt;
} MyQueue;

MyQueue* init(int size) {
    MyQueue *q = (MyQueue *)malloc(sizeof(MyQueue));
    q->data = (int *)malloc(sizeof(int) * size);
    q->size = size;
    q->cnt = 0;
    q->head = q->tail = 0;
    return q;
}

/** Push element x onto stack. */
void push(MyQueue* q, int val) {
    if (q == NULL) return ;
    if (q->cnt == q->size) return ;
    q->data[q->tail++] = val;
    if (q->tail == q->size) q->tail -= q->size;
    q->cnt += 1;
    return ;
}

/** Removes the element on top of the stack and returns that element. */
int pop(MyQueue* q) {
    if (q == NULL) return 0;
    if (q->cnt == 0) return 0;
    q->head += 1;
    if (q->head == q->size) q->head -= q->size;
    q->cnt -= 1;
    return 1;
}

/** Get the top element. */
int front(MyQueue* q) {
    return q->data[q->head];
}

/** Returns whether the stack is empty. */
bool empty(MyQueue* q) {
    return q->cnt == 0;
}

void clear(MyQueue* q) {
    if (q == NULL) return ;
    free(q->data);
    free(q);
    return ;
}

typedef struct {
    MyQueue *q1, *q2;
} MyStack;

/** Initialize your data structure here. */

MyStack* myStackCreate() {
    MyStack *s = (MyStack *)malloc(sizeof(MyStack));
    s->q1 = init(100);
    s->q2 = init(100);
    return s;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
    if (!empty(obj->q1)) {
        push(obj->q1, x);
    } else {
        push(obj->q2, x);
    }
    return ;
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
    MyQueue *p = empty(obj->q1) ? obj->q2 : obj->q1;
    MyQueue *q = empty(obj->q1) ? obj->q1 : obj->q2;
    int element = front(p);
    pop(p);
    while (!empty(p)) {
        push(q, element);
        element = front(p);
        pop(p);
    }
    return element;
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
    MyQueue *p = empty(obj->q1) ? obj->q2 : obj->q1;
    MyQueue *q = empty(obj->q1) ? obj->q1 : obj->q2;
    int element;
    while (!empty(p)) {
        element = front(p);
        pop(p);
        push(q, element);
    }
    return element;
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
    return empty(obj->q1) && empty(obj->q2);
}

void myStackFree(MyStack* obj) {
    if (obj == NULL) return ;
    clear(obj->q1);
    clear(obj->q2);
    free(obj);
    return ;
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);

 * int param_2 = myStackPop(obj);

 * int param_3 = myStackTop(obj);

 * bool param_4 = myStackEmpty(obj);

 * myStackFree(obj);
*/
