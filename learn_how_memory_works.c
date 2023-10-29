#include <stdio.h>

int main(void){
    char num1 = 3;
    printf("%p\n", &num1);
    char num2 = 4;
    printf("%p\n", &num2);
    int num3 = 5;
    printf("%p\n", &num3);
    char num4 = 3;
    printf("%p\n", &num4);
    char num5 = 4;
    printf("%p\n", &num5);
    char num6 = 5;
    printf("%p\n", &num6);

    return 0;
}
