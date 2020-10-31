#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "stack.h"
//初始化
Stack *Init()
{
    //创建新结点
    Stack *p = (Stack*)malloc(sizeof(Stack));
    p->next = NULL;
    p->top = 0;
    p->Stack_Size = sizeof(p);
    return p;
}