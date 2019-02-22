#include<stdio.h>
int main()
{
    float a, b, c;
    int d, total;
    scanf("%f %d %d", &a, &d, &total);
    b = a*(total - total/3);
    c = (total*a) - (total*a)*d/100;
    if(b > c){
        printf("Discount %d%%\n%.2f", d, c);
    }
    else if(b == c){
        printf("Discount %d%%\n%.2f", d, c);
    }else{
        printf("Buy 2 Get 1\n%.2f", b);
    }
}