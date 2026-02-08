#include <stdio.h>

int main()
{
    float temp, result;
    int choice;

    printf("Enter 1 for Celsius to Fahrenheit\n");
    printf("Enter 2 for Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        result = (temp * 9/5) + 32;
        printf("Temperature in Fahrenheit = %.2f", result);
    }
    else if(choice == 2)
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        result = (temp - 32) * 5/9;
        printf("Temperature in Celsius = %.2f", result);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}
