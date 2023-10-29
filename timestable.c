#include <stdio.h>
#include <string.h>

int main(void)
{

    // for (int i = 1; i <= tableSize; i++){
    //     printf("\n");
    // for (int j = 1; j <= tableSize; j++){
    //     int number = i * j;

    //     printf("%4d", number);
    // }}


    int tableSize = 12;

    int numbers[tableSize][tableSize];
    for (int i = 1; i <= tableSize; i++){
        printf("\n");
        for (int j = 1; j <= tableSize; j++){
            numbers[i-1][j-1] = i*j;
            }
        }
    for (int i = 0; i < tableSize; i++){
        printf("\n");
        for (int j = 0; j < tableSize; j++){
            printf("%4d", numbers[i][j]);
            }}}

