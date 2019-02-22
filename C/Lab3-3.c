#include <stdio.h>
int main(){
	int num;
	scanf("%d", &num);
	int day = num/86400;
	int day1 = num%86400;
	int hour = day1/3600;
	int hour1 = day1%3600;
	int minute = hour1/60;
	int minute1 = hour1%60;
	printf("%d s = %d d %d h %d m %d s\n", num, day, hour, minute, minute1);
	return 0;
}