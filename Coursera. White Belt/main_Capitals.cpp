#include <iostream>
#include <map>
#include <string>
using namespace std;

void ChangeCapital(string country, string new_capital, map<string, string>& capitals) {
	if (capitals.count(country)) {
		string old_capital = capitals[country];
		if (old_capital != new_capital) {
			capitals[country] = new_capital;
			cout << "Country " << country << " has changed its capital from " << old_capital << " to " << new_capital << endl;
		}
		else {
			cout << "Country " << country << " hasn't changed its capital" << endl;
		}
	}
	else {
		capitals[country] = new_capital;
		cout << "Introduce new country " << country << " with capital " << new_capital << endl;
	}
}

void Rename(string old_country_name, string new_country_name, map<string, string>& capitals) {
	if (capitals.count(old_country_name) && !(capitals.count(new_country_name)) && old_country_name != new_country_name) {
		capitals[new_country_name] = capitals[old_country_name];
		capitals.erase(old_country_name);
		cout << "Country " << old_country_name << " with capital " << capitals[new_country_name] << " has been renamed to " << new_country_name << endl;
	}
	else {
		cout << "Incorrect rename, skip" << endl;
	}
}

void About(string country, map<string, string>& capitals) {
	if (capitals.count(country)) {
		cout << "Country " << country << " has capital " << capitals[country] << endl;
	}
	else {
		cout << "Country " << country << " doesn't exist" << endl;
	}
}

void Dump(const map<string, string>& capitals) {
	if (capitals.size() != 0) {
		for (const auto& item : capitals) {
			cout << item.first << "/" << item.second << " ";
		}
	}	
	else {
		cout << "There are no countries in the world" << endl;
	}
	cout << endl;
}

int main() {
	map<string, string> capitals;
	int Q;
	string ORD, country, new_capital, old_country_name, new_country_name;

	cin >> Q;

	while (Q > 0) {
		cin >> ORD;
		if (ORD == "CHANGE_CAPITAL") {
			cin >> country >> new_capital;
			ChangeCapital(country, new_capital, capitals);
		}
		else if (ORD == "RENAME") {
			cin >> old_country_name >> new_country_name;
			Rename(old_country_name, new_country_name, capitals);
		}
		else if (ORD == "ABOUT") {
			cin >> country;
			About(country, capitals);	
		}
		else if (ORD == "DUMP") {
			Dump(capitals);
		}
		Q--;
	}
	return 0;
}