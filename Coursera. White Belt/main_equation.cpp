#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double A, B, C, x_1, x_2, disc;
	cin >> A >> B >> C;
	disc = (B * B) - (4 * A * C);
	if (A == 0 && B != 0 && C != 0) {
		x_1 = -C / B;
		cout << x_1;
	}
	else if (A != 0 && B == 0 && C != 0) {
		if (A < 0 || C < 0) {
			x_1 = sqrt(-C / A);
			x_2 = -sqrt(-C / A);
			cout << x_1 << " " << x_2;
		}
		else {
			cout << "";
		}
	}
	else if (A != 0 && B != 0 && C == 0) {
		x_1 = 0;
		x_2 = -B / A;
		cout << x_1 << " " << x_2;		
	}
	else if (A == 0 && B == 0 && C != 0) {
		cout << "";
	}
	else if (A == 0 && B != 0 && C == 0) {
		x_1 = 0;
		cout << x_1;
	}
	else if (A != 0 && B == 0 && C == 0) {
		x_1 = 0;
		cout << x_1;
	}
	else {
		if (disc > 0) {
				x_1 = (-B + sqrt(disc)) / (2 * A);
				x_2 = (-B - sqrt(disc)) / (2 * A);
				cout << x_1 << " " << x_2;
			}
		else if (disc == 0) {
			x_1 = -B / (2 * A);
			cout << x_1;
		}
		else {
			cout << "";
		}
	}
	return 0;
}