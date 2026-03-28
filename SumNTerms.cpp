#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, r, n, sum;

    cout << "Enter first term (a): ";
    cin >> a;

    cout << "Enter common ratio (r): ";
    cin >> r;

    cout << "Enter number of terms (n): ";
    cin >> n;

    if(r == 1)
        sum = a * n;
    else
        sum = a * (1 - pow(r, n)) / (1 - r);

    cout << "Sum of GP = " << sum;

    return 0;
}
