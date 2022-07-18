#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool IsPalindrom(string word) {
	bool flag = true;
	if (word == "" || word == " ") {
		flag = true;
	}
	else {
		for (int i = 0; i < word.size() / 2; ++i) {
			if (word[i] != word[word.size() - i - 1]) {
				flag = false;
				break;
			}
		}
	}
	return flag;
}

vector<string> PalindromFilter(vector<string> words, int minLength) {
	vector<string> answer;
	for (string s : words) {
		if (IsPalindrom(s) && s.size() >= minLength) {
			answer.push_back(s);
		}
	}
	return answer;
}