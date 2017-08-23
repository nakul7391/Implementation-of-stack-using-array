/*This program is to implement stack */
#include <stdio.h>
#include "stack_ops.h"

int main(int argc, char *argv[] )
{
		Stack_t s;
		int i = 0, x;
		printf("Enter size of stack: ");
		scanf("%ld",&s.size);

		if( create_stack(&s) == SUCCESS )
		printf("Stack created start address: %p\n",s.array);
		else
		printf("Stack creation failed\n");

		x = peek(&s);
		if( x == EMPTY)
		printf("peek stack is empty\n");
		else if( x == FULL )
		printf("peek stack is full\n");
		else
		printf("peek top is %d\n",x);

		for( i = 0; i < s.size+1; i++ )
		{
				if( push(&s,i) == FULL )
				printf("Stack full\n");
		}

		x = peek(&s);
		if( x == EMPTY)
		printf("peek stack is empty\n");
		else if( x == FULL )
		printf("peek stack is full\n");
		else
		printf("peek top is %d\n",x);


		for( i = 0; i < s.size+1; i++ )
		{
				if( pop(&s) == EMPTY )
				printf("Stack empty\n");
		}

		x = peek(&s);
		if( x == EMPTY)
		printf("peek stack is empty\n");
		else if( x == FULL )
		printf("peek stack is full\n");
		else
		printf("peek top is %d\n",x);

		push(&s,25);

		x = peek(&s);
		if( x == EMPTY)
		printf("peek stack is empty\n");
		else if( x == FULL )
		printf("peek stack is full\n");
		else
		printf("peek top is %d\n",x);


		return 0;
}
