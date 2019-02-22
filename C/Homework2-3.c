#include <stdio.h>

int main(){
	char num[5];
	scanf("%s", num);
	printf("%c", num[0]);
	printf("%81c%c", num[0], num[1]);
	printf("%80c%c%c", num[0],num[1],num[2]);
	printf("%79c%c%c%c", num[0],num[1],num[2],num[3]);
	printf("%78c%c%c%c%c", num[0],num[1],num[2],num[3],num[4]);
	return 0;
}