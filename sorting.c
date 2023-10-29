#include <stdio.h>

int main(void){
    int numbers[5] = {7,4,2,5,1};
    for (int c = 0; c < 5; c++){
        int max = c;
        for (int d = c + 1; d < 5 - 1; d++){
            if (numbers[d] > numbers[c]){
                max = d;
            }
        int temp = numbers[max];
        numbers[max] = numbers[c];
        numbers[c] = temp;
        }    
    }
    for (int c = 0; c < 5; c++)
    {printf("%d\n", numbers[c]);}

}