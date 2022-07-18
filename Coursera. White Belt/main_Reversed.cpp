#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& numbers) {
    int tmp;
    for (int i = 0; i < numbers.size() / 2; ++i) {
        tmp = numbers[i];
        numbers[i] = numbers[numbers.size() - i - 1];
        numbers[numbers.size() - i - 1] = tmp;
    }
}

int main() {
    vector<int> numbers = {1, 5, 3, 4, 2};
    Reverse(numbers);
    return 0;
}