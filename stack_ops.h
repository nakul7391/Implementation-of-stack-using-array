#ifndef STACK_OPS_H
#define STACK_OPS_H

typedef int data_t;

typedef struct STACK
{
      data_t *array;
      size_t size;
      int top;
} Stack_t;

typedef enum MACROS
{
  FAILURE,
  SUCCESS,
  CREATED,
  FULL,
  EMPTY
} Status;

/*allocate memory for the stack*/
Status create_stack(Stack_t *s);

/*push data inside stack*/
Status push(Stack_t *s, data_t data);

/*pop the data*/
Status pop(Stack_t *s);

/*stack peek show the top of stack*/
Status peek(Stack_t *s);

#endif
