#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "stack.h"

int main(void)
{
    Stack *L = Init();
    for(int i = 0;i < 5;i++)
    {
        Push(L);
    }
    Display(L);

    free(L);
    return 0;
}