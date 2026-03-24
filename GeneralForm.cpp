#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, r, n;

    cout << "Enter first term (a): ";
    cin >> a;

    cout << "Enter common ratio (r): ";
    cin >> r;

    cout << "Enter number of terms (n): ";
    cin >> n;

    cout << "Geometric Progression: ";

    for(int i = 0; i < n; i++) {
        cout << a * pow(r, i) << " ";
    }

    return 0;
}
