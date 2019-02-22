#include <stdio.h>
int main(){
    float max, min, avg, k;
    int i=1;
    int num;
    scanf("%d", &num);
    scanf("%f", &k);
    max = k; min = k; avg = k;
    for( i < num ; i++)
    {
        scanf("%f", &k);
        if(k > max)
            max = k;
        if(k < min)
            min = k;
        avg = avg + k;
    }
    printf("%d Values\n", num);
    printf("Min: %.3f\n", min);
    printf("Max: %.3f\n", max);
    printf("Avg: %.2f\n", avg/num);

    return 0;
}