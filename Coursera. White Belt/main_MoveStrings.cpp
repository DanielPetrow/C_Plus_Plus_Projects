#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> MoveStrings(vector<string>& source, vector<string>& destination) {
    for (string word : source) {
        destination.push_back(word);
    }
    source.clear();
    return destination;
}

int main() {
    vector<string> source = {"a", "b", "c"}, destination = {"z"};
    MoveStrings(source, destination);
    return 0;
}