#include <stdio.h>

int main() {
    float a, b, c, d;
    printf("Enter a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    d = b*b - 4*a*c;

    switch(d > 0) {
        case 1:
            printf("Roots are real and distinct");
            break;
        case 0:
            switch(d == 0) {
                case 1:
                    printf("Roots are real and equal");
                    break;
                case 0:
                    printf("Roots are imaginary");
            }
    }
    return 0;
}
