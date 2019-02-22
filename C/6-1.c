#include <stdio.h>
int main(){
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    int num;
    int check = 1;
    int i = 0;

    while(check){
        scanf("%d", &num);
        for(i=0;i<8; i++){
            if (num == M[i]){
                printf("%d is in M at index [%d]", num, i);
                check == 0;
            }
        }
        for (i=0; i<7; i++){
            if (num == N[i]){
                printf("%d is in N at index [%d]", num, i);
                check == 0;
            }
        }
        if (1<= num && num <= 20 && check != 0){
            printf("%d is not in neither M nor N", num);
            check--;
        }
    }
    return 0;
}