#include <iostream>
using namespace std;

int Factorial(int x) {
    int res = 1;
    if (x > 0) {
        for(int i = 1; i <= x; ++i) {
            res *= i;
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << Factorial(n);
}