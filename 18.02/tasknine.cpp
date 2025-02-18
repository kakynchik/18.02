#include <iostream>
using namespace std;

int main() {
    long long n, reversed = 0;
    cout << "Enter a number without zeros: ";
    cin >> n;

    while (n > 0) {
        int digit = n % 10;   
        reversed = reversed * 10 + digit;  
        n /= 10;   
    }

    cout << reversed << endl;
    return 0;
}
