#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "stack.h"
//入栈
void Push(Stack *L)
{
    //创建新结点
    Stack *p = (Stack*)malloc(sizeof(Stack));
    printf("请输入名字：");
    scanf("%s", p->name);
    printf("请输入学号：");
    scanf("%d", &p->SchoolID);
    printf("请输入成绩：");
    scanf("%d", &p->Grade);
    //把p结点链接到L
    if(L->next == NULL)
    {
        //若L为空,把p链接到栈底结点后
        p->next = NULL;
        L->next = p;
        //栈高+1
        L->top += 1;
        //栈的容量增加
        L->Stack_Size += sizeof(p);
    }
    else
    {
        //若L非空，遍历L到栈顶
        while(L->next != NULL)
        {
            L = L->next;
        }
        //把p链接到栈顶元素后
        p->next = L->next;
        L->next = p;
        //栈高+1
        L->top += 1;
        //栈的容量增加
        L->Stack_Size += sizeof(p);
    }
    
}