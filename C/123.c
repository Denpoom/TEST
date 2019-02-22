#include <stdio.h>

int main(){
    float a, b, c, get1, get2;
    int d = c/3;
    scanf("%f %f %f",&a,&b,&c);
    get1 = a*(c-d);
    get2 = (a*(1-(b/100)))*c;
    if(get1<get2){
        printf("Buy 2 Get 1\n%.2f",get1);
    }
    else{
        printf("Discount %.0f%%\n%.2f",b,get2);
    }
    return 0;
}
