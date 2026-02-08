#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 10)
        printf("Number is Positive and Greater than 10");
    else if(num > 0)
        printf("Number is Positive but less than or equal to 10");
    else if(num < 0)
        printf("Number is Negative");
    else
        printf("Number is Zero");

    return 0;
}
