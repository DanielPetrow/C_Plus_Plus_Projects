#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int Count(const map<int, vector<string>>& synonyms, const string& word) {
	int counter = 0;
	for (const auto& item : synonyms) {
		for (const auto& i : item.second) {
			if (word == i) {
				counter++;
			}
		}
	}
	return counter;
}

string Check(const map<int, vector<string>>& synonyms, const string& word1, const string& word2) {
	vector<string> words = {}, words_reversed = {};
	string answer = "NO";
	words.push_back(word1);
	words.push_back(word2);
	words_reversed.push_back(word2);
	words_reversed.push_back(word1);
	for (const auto& item : synonyms) {
		if (item.second == words || item.second == words_reversed) {
			answer = "YES";
		}
	}
	if (answer == "YES") {
		return answer;
	}
	else {
		return "NO";
	}
}

int main() {
	map<int, vector<string>> synonyms;

	int Q, i = 0;
	string ORD, word, word1, word2;

	cin >> Q;
	while (Q > 0) {
		cin >> ORD;
		if (ORD == "ADD") {
			cin >> word1 >> word2;
			synonyms[i].push_back(word1);
			synonyms[i].push_back(word2);
			i++;
		}
		else if (ORD == "COUNT") {
			cin >> word;
			cout << Count(synonyms, word) << endl;
		}
		else if (ORD == "CHECK") {
			cin >> word1 >> word2;
			cout << Check(synonyms, word1, word2) << endl;
		}
		Q--;
	}
	return 0;
}