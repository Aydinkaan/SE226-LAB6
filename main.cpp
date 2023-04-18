#include <iostream>
using namespace std;

double compute_sum(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        double term = (-1) * ((n % 2 == 0) ? 1 : -1) / static_cast<double>(n);
        return term + compute_sum(n-1);
    }
}

double compute_sum() {
    int n;
    cout << "Enter a value for n: ";
    cin >> n;
    return compute_sum(n);
}

int main() {
    int n;
    cout << "Enter a value for n: ";
    cin >> n;

    double sum1 = compute_sum(n);
    cout << "The sum is : " << sum1 << endl;

    double sum2 = compute_sum();
    cout << "The sum is : " << sum2 << endl;

    return 0;
}
