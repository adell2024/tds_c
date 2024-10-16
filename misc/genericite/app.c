#include <stdlib.h>
#include <stdio.h>
#include "stack.h" 

#define PRINT_TOP(stack) \
    printf("- Top of stack « " #stack " » : %d\n", STACK_TOP(stack)) 

STACK_DEFTYPE(int, stack, 1024); 
int main(void)
{
    stack stack;
    STACK_DECLARE(int, temp_stack, 5); 
    int i = 1;

    STACK_INIT(stack); 
    STACK_INIT(temp_stack);
    while (!STACK_FULL(temp_stack)) 
    {
        PUSH(temp_stack, i); 
        i++;
    }

    printf("Stack « temp_stack » is full\n");
    PRINT_TOP(temp_stack);

    if (!STACK_FULL(stack) && !STACK_EMPTY(temp_stack)) 
    {
        PUSH(stack, POP(temp_stack)); 
        printf("PUSH(stack, POP(temp_stack)):\n");
        PRINT_TOP(temp_stack);
        PRINT_TOP(stack);
    }
    return EXIT_SUCCESS;
}
