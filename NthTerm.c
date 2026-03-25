#include <stdio.h>
#include <math.h>

int main() {
    int a, r, n;
    double term;

    printf("Enter first term (a): ");
    scanf("%d", &a);

    printf("Enter common ratio (r): ");
    scanf("%d", &r);

    printf("Enter term number (n): ");
    scanf("%d", &n);

    term = a * pow(r, n - 1);

    printf("The %dth term of the GP is: %.0f", n, term);

    return 0;
}
