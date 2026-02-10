#include <stdio.h>

int main()
{
    int start, end;
    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    printf("Even numbers:\n");
    int i = start;
    while(i <= end)
    {
        if(i % 2 == 0)
            printf("%d ", i);
        i++;
    }

    printf("\nOdd numbers:\n");
    i = start;
    while(i <= end)
    {
        if(i % 2 != 0)
            printf("%d ", i);
        i++;
    }

    return 0;
}
