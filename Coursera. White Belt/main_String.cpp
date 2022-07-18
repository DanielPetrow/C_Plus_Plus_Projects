#include <iostream>
#include <string>
using namespace std;
int main() {
    string str_0, str_1, str_2;
	cin >> str_0 >> str_1 >> str_2;
	if (str_0 > str_1) {
		str_0 = str_1;
	}
	if (str_0 > str_2) {
		str_0 = str_2;
	}
	cout << str_0 << endl;
    return 0;
}
