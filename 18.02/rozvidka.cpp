#include <iostream>
using namespace std;

int cW(int n) {
    if (n < 3) return 0;
    int ways = 0;

    for (int removeEven = 0; removeEven <= 1; removeEven++) {
        int count = n, first = (removeEven == 0) ? 1 : 2;
        while (count > 3) {
            count = (count + 1) / 2;
            first = (first % 2 == 0) ? 1 : 2;
        }
        if (count == 3) ways++;
    }

    return ways;
}

int main() {
    int n;
    cin >> n;
    cout << cW(n) << endl;
    return 0;
}
