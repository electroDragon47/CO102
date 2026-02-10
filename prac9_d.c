#include <stdio.h>
#include <math.h>

int main()
{
    int start, end, i;
    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    for(i = start; i <= end; i++)
        printf("Square root of %d = %.2f\n", i, sqrt(i));

    return 0;
}
