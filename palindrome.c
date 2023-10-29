#include <stdio.h>
#include <string.h>
int main(void){
    char word[] = "hello";
    int length = strlen(word);
    for (int i = 0; i < length/2; i++){
        if (word[i] != word[length-1]){
            printf("The string is not a palindrome.\n");
            return 1;
        }
    }
    printf("this word is a palindrome");
    }