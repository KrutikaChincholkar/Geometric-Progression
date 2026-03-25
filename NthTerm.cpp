
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, r, n;
    double term;

    cout << "Enter first term (a): ";
    cin >> a;

    cout << "Enter common ratio (r): ";
    cin >> r;

    cout << "Enter term number (n): ";
    cin >> n;

    term = a * pow(r, n - 1);

    cout << "The " << n << "th term of the GP is: " << term;

    return 0;
}
