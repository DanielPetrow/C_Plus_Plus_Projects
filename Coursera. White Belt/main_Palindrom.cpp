#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom(string word) {
    bool flag = true;
    if (word == "" || word == " ") {
        flag = true;
    }
    else {
        for(int i = 0; i < word.size() / 2; ++i) {
            if (word[i] == word[word.size() - i - 1]) {
              flag = true;
            }
            else {
                flag = false;
            }
        }
    }
    return flag;
}

int main() {
    string word;
    cin >> word;
    cout << IsPalindrom(word);
    return 0;
}