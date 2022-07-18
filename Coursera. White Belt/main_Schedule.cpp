#include <iostream>
#include <vector>
#include <string>
using namespace std;

void ADD(vector<vector<string>>& objectives, int day, string name) {
	objectives[day - 1].push_back(name);
}

void DUMP(const vector<vector<string>>& objectives, int day) {
	cout << objectives[day - 1].size() << " ";
	for (int i = 0; i < objectives[day - 1].size(); i++) {
		cout << objectives[day - 1][i] << " ";
	}
	cout << endl;
}

void NEXT(vector<vector<string>>& objectives, int month) {
	vector<vector<string>> tmp = objectives;
	objectives.resize(month);
	if (tmp.size() > month) {
		for (int i = month; i < tmp.size(); i++) {
			for (int j = 0; j < tmp[i].size(); j++) {
				objectives[objectives.size() - 1].push_back(tmp[i][j]);
			}
		}
	}
}

int main() {
	int Q, day, month = 0;
	string ORD, name;
	vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	vector<vector<string>> objectives(days[month]);

	cin >> Q;
	
	while (Q > 0) {
		cin >> ORD;
		if (ORD == "ADD") {
			cin >> day >> name;
			ADD(objectives, day, name);
		}
		else if (ORD == "DUMP") {
			cin >> day;
			DUMP(objectives, day);
		}
		else if (ORD == "NEXT") {
			month++;
			if (month == 12) {
				month = 0;
			}
			NEXT(objectives, days[month]);
		}
		Q--;
	}
	return 0;
}