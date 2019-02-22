#include<stdio.h>
#include<string.h>
int main() {
    char word[101];
    int i;
    scanf("%s", word);
    for(int i = 0; i < strlen(word); i++) {
        if(word[i] != word[strlen(word) - i - 1]) {
            printf("It is not Palindrome.");
            return 0;
        }
    }
    printf("It is Palindrome.");
    return 0;
}