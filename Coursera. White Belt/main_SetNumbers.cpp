#include <iostream>
#include <set>
using namespace std;

int main() {
    int Q;
	string str;
	set<string> numbers;
	cin >> Q;
	while (Q > 0) {
		cin >> str;
		numbers.insert(str);
        Q--;
	}
	cout << numbers.size();
    return 0;
}