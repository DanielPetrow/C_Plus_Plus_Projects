#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, average = 0, days = 0;
    cin >> N;
    vector<int> days_temp(N);
    vector<int> answer;

    for (int i = 0; i < N; i++) {
        cin >> days_temp[i];
        average += days_temp[i]; 
    }

    average /= N;

    for (int i = 0; i < days_temp.size(); i++) {
        if (days_temp[i] > average) {
            days++;
            answer.push_back(i);
        }
    }
    cout << days << endl;
    for (int j : answer) {
        cout << j << " ";
    }
    return 0;
}