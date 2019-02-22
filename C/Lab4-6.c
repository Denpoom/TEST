#include <stdio.h>
#include <ctype.h>
int main(){
    char var;
    scanf("%c", &var);
    if (isdigit(var)){
        printf("number");
    }
    else if (islower(var)){
        printf("lowercase");
    }
    else if (isupper(var)){
        printf("uppercase");
    }
    else{
        printf("error");
    }

    return 0;
}
