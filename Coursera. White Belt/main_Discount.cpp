#include <iostream>
using namespace std;
int main() {
    double N, A, B, X, Y;
	cin >> N >> A >> B >> X >> Y;
	if(N > B) {
		N = N * (1 - Y / 100);
		cout << N;
	}
	else if (N > A) {
		N = N * (1 - X / 100);
		cout << N;
	}
	else {
		cout << N;
	}
    return 0;
}