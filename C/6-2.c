#include <stdio.h>
int main(){
    double ans, frist[3][3], secon[3][3];
    int i,j,k;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            scanf("%lf", &frist[i][j]);
        }
    }
    for (i=0; i<3; i++){
        for (j=0;j<3; j++){
            scanf("lf", &secon[i][j]);
        }
    }
    printf("A x B\n");
    for (k=0; k<3; k++){
        for (i=0;i<3; i++){
            ans = frist[k][0]*secon[0][i] + frist[k][1]*secon[1][i];
            printf("%.2lf", ans);
        }
        printf("\n");
    }

    return 0;
}