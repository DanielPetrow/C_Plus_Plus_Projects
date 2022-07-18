#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N, replace;
	vector<int> binary;
	cin >> N;
	while ((N + 1) / 2 > 0) {
		binary.push_back(N % 2);
		N /= 2;
	}
	reverse(binary.begin(), binary.end());
	for (auto i : binary) {
		cout << i;
	}
}