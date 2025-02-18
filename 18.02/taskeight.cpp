#include <iostream>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long binomialCoeff(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int a, b;
    cin >> a >> b;

    if (a > b + 1) {
        cout << "0" << endl;
    }
    else {
        cout << binomialCoeff(b + 1, a) << endl;
    }

    return 0;
}
