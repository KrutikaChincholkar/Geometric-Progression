#include <stdio.h>
#include <math.h>

int main() {
    double a, r, n, sum;

    printf("Enter first term (a): ");
    scanf("%lf", &a);

    printf("Enter common ratio (r): ");
    scanf("%lf", &r);

    printf("Enter number of terms (n): ");
    scanf("%lf", &n);

    if(r == 1)
        sum = a * n;
    else
        sum = a * (1 - pow(r, n)) / (1 - r);

    printf("Sum of GP = %.2lf", sum);

    return 0;
}
