#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char text[300];
    char check[3];
    int i, j, count=0;
    scanf("%[^\n]%*c", text);
    scanf("%s", check);

    if (isupper(check[0])){
        check[1] = tolower(check[0]);

    }else if (islower(check[0])){
        check[1] = toupper(check[0]);
    }
    //check and operating
    int len_text = strlen(text);
    for(i=0; i < len_text; i++){
        if(text[i] == check[0] || text[i] == check[1]){
            count++;
        }
    }
    if (count > 0){
        printf("There is/are %d \"%c\" in the above sentences.\nPosition:" , count , check[0]);
        for(i=0; i < len_text; i++){
            if (text[i] == check[0] || text[i] == check[1]){
                printf(" %d", i+1);
                if(count > 1){
                    printf(",");
                    count--;
                }
            }
        }
    }else{
            printf("Not found.");
              }
    return 0;

}