#include <stdio.h>

int main(){
	char num[5];
	scanf("%s", num);
	printf("%c\n", num[0]);
	printf("%2c%c\n", num[0], num[1]);
	printf("%3c%c%c\n", num[0],num[1],num[2]);
	printf("%4c%c%c%c\n", num[0],num[1],num[2],num[3]);
	printf("%5c%c%c%c%c\n", num[0],num[1],num[2], num[3], num[4]);
	return 0;
}