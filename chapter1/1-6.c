#include <stdio.h>

int main()
{
	printf("Press a key \n \n");
	printf("The expression evaluates to %d\n", getchar() != EOF);
	return 0;
}
