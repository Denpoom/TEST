#include<stdio.h>
int main(){
    int num, i;
    scanf("%d", &num);
    char data[num+1];
    for (i = 0; i <= num;i++){
        scanf("%s", &data[i]);
    }
    printf("%c", data[0]);
    return 0;
}