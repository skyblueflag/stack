#ifndef STACK_H_
#define STACK_H_
typedef int ElemType;
typedef struct Node
{
    char name[20];
    ElemType SchoolID;  //学号
    ElemType Grade;     //成绩
    struct Node *next;  //指向下一个结点
    int top;            //栈高
    int Stack_Size;     //栈的容量
}Stack;
//初始化
Stack *Init();
//入栈
void Push(Stack*);
//出栈
void Pop(Stack*);
//打印输出
void Display(Stack*);

#endif//STACK_H_