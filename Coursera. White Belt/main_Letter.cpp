#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int num_f = 0, flag = 0;
    cin >> str;
    for (char i : str) {
        if (i == 'f') {
            num_f++;
        }
    }
    if (num_f == 1) {
        cout << -1;
    }
    else if (num_f == 0) {
        cout << -2;
    }
    else {
        for(int j = 0; j < str.size(); ++j) {
            if (str[j] == 'f') {
                flag++;
                if (flag == 2) {
                    cout << j;
                    break;
                }
            }
        }        
    }
}