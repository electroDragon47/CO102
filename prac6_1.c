#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0 && (n & (n - 1)) == 0)
        printf("The number is a power of 2");
    else
        printf("The number is not a power of 2");

    return 0;
}