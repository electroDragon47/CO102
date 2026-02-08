#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Result after multiplying by 8: %d", n << 3);
    return 0;
}