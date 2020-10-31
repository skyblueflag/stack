#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "stack.h"
//打印输出
void Display(Stack *L)
{
    //创建临时结点指向L
    Stack *p = L;
    printf("*********学生信息*********\n");
    printf("姓名\t学号\t成绩\n");
    while(p->next)
    {
        p = p->next;
        printf("%s\t%d\t%d\t\n", p->name, p->SchoolID, p->Grade);
        L->top += 1;
        L->Stack_Size += sizeof(p);
    }
    printf("栈高：%d，\t栈容量：%d\n", L->top, L->Stack_Size);
    printf("**************************");
    printf("\n");
}