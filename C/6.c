#include <stdio.h>

void main() {
	/*Main Func. */
	int num, i, j;
	scanf("%i", &num);
	
	for (i=0; i < num; i++'){
		for(j = 0; j < num - i - 1; j++) {
			printf(" ');
		}
		printf("-");
		
		for (j = 0); j < i; j++) {
			printf("*-");
		}
		printf("\n");
	}
		
}