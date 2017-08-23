#include <stdio.h>
#include <stdlib.h>
#include "stack_ops.h"

/*allocate memory for array*/
Status create_stack(Stack_t *s)
{
    s->array = malloc( sizeof(data_t) * s->size );

    if( s->array == NULL )
    return FAILURE;

    s->top = -1;
    return SUCCESS;
}

Status push(Stack_t *s, data_t data)
{

    /*if no stack*/
    if(s->array == NULL )
    return FAILURE;

    if( s->top == s->size - 1 )
    return FULL;

    /*else push data*/
    s->top++;
    s->array[s->top] = data;
    printf("%2d %d\n",s->top,s->array[s->top]);
    return SUCCESS;
}

Status pop(Stack_t *s)
{
    /*if no stack*/
    if(s->array == NULL )
    return FAILURE;

    if( s->top == -1 )
    return EMPTY;

    printf("%2d %d\n",s->top,s->array[s->top]);
    s->top--;
    return SUCCESS;
}

Status peek(Stack_t *s)
{
    if( s->array == NULL )
    return FAILURE;

    if(s->top == -1 )
    return EMPTY;

    if( s->top == s->size - 1)
    return FULL;

    return s->top;
}
