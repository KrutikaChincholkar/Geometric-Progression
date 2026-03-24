#include <stdio.h>
#include <math.h>

int main() {
    int a, r, n;

    printf("Enter first term (a): ");
    scanf("%d", &a);

    printf("Enter common ratio (r): ");
    scanf("%d", &r);

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    printf("Geometric Progression:\n");

    for(int i = 0; i < n; i++) {
        printf("%.0f ", a * pow(r, i));
    }

    return 0;
}
