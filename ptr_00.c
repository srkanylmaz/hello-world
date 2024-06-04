#include <stdio.h>

int main()
{
	char chr;
	char *ptr;
	
	chr = 'S';
    ptr = &chr;
	
	printf("->res val chr: %c\n",chr);
	printf("->res adr ptr: %p\n",ptr);
	printf("->res val ptr: %c\n",*ptr);

	return(0);
}
