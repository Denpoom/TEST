#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int life, combo=0;
    char shout[21];
    scanf("%d %s", &life , &shout);
    int odd = life, event = life;
    char history[strlen(shout)+1];
    for (int i = 0; i < strlen(shout); i++){
        history[i] = shout[i];
    }
    printf("%d",history*5);
    return 0;
    }