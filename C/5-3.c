#include<stdio.h>
int main()
{
    int i;
    int num;
    scanf("%d", &num);
    for (i = num; i > -1; i--)
        printf("%d ", i);
    return 0;
}
