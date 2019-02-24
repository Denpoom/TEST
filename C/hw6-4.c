#include<stdio.h>
#include<string.h>
int main(){
    char text[101],ans[100];
    scanf("%[\n]",&text);
    char *text2 = strtok(text," ");
    int check=0;
    while(text2 != NULL){
        if (check < strlen(text2)){
            strcpy(ans, text2);
            check = strlen(text2);
        }
        text2 = strtok(NULL,"");
    }
    printf("%s",ans);
    return 0;
}