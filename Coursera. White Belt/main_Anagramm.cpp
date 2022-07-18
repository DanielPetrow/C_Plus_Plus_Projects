#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

bool IsAnagramm(const vector<string>& pairs) {

	bool flag;
	map<char, int> first_map, second_map;

	for (int i = 0; i < pairs[0].size(); ++i) {
		++first_map[pairs[0][i]];
	}

	for (int i = 0; i < pairs[1].size(); ++i) {
		++second_map[pairs[1][i]];
	}

	if (first_map == second_map) {
		return true;
	}
	else {
		return false;
	}

	first_map.clear();
	second_map.clear();
}

int main() {
	vector<string> pairs;
	int N;
	string first, second;
	cin >> N;
	while (N > 0) {
		cin >> first >> second;
		pairs.push_back(first);
		pairs.push_back(second);
		if (IsAnagramm(pairs)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		pairs.clear();
		N--;
	}
	return 0;
}