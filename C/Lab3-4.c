#include <stdio.h>
#include <math.h>
int main(){
	float num1, num2;
	float ans;
	scanf("%f%f", &num1, &num2);
	ans = pow((pow(num1, 2)+ pow(num2, 2)),0.5);
	printf("%.2f\n", ans);
	return 0;
	
}