#include <stdio.h>
int main(){
	float money, down, piece;
	float ans;
	 
	scanf("%f%f%f", &money ,&down, &piece);
	ans = down/100;
	ans = money*ans;
	ans = money-ans;
	ans = ans*piece; 
	
	
 
	printf("%.2f\n", ans);



                   
    return 0;
} 