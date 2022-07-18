#include <iostream>
#include <vector>
using namespace std;

vector<int> Reversed(const vector<int>& v) {
    vector<int> copy = v;
    int tmp;
    for (int i = 0; i < copy.size() / 2; ++i) {
        tmp = copy[i];
        copy[i] = copy[copy.size() - i - 1];
        copy[copy.size() - i - 1] = tmp;
    }
    return copy;
}

int main() {
    vector<int> v = {1, 5, 3, 4, 2};
    Reversed(v);
    return 0;
}