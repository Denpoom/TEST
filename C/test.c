#include <stdio.h>
void main(){
    int num;
    scanf("%d", num);
    int i, j, k;
    for(i=1; i <= num; i++){
        for(j = num - i; j >= 1; j--){
            printf(" ");
        }
        for(k=1;k<=(i*2)-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}