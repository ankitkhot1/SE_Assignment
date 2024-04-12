#include <stdio.h>

int main(void) {
int Per;
	printf("Enter Per : ");
	scanf("%d",&Per);
	if(Per >= 35)
		printf("\nResult is pass");
	else
		printf("\nResult is fail");
	return 0;
}