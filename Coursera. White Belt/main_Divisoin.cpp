#include <iostream>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    if (B != 0) {
        cout << A / B;
    }
    else {
        cout << "Impossible";
    }
    return 0;
}