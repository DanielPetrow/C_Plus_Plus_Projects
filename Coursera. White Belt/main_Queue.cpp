#include <iostream>
#include <vector>
using namespace std;

void Worry(vector<bool>& queue, int i) {
	queue[i] = false;
}

void Quiet(vector<bool>& queue, int i) {
	queue[i] = true;
}

void ChangeEnd(vector<bool>& queue, int i) {
	queue.resize(queue.size() + i, true);
}

int WorryCount(const vector<bool>& queue) {
	int i = 0;
	for (bool s : queue) {
		if (s == false) {
			i++;
		}
	}
	return i;
}

int main() {
	vector<bool> queue;
	int Q, N;
	cin >> Q;
	string ORD;
	while (Q > 0) {
		cin >> ORD;
		if (ORD == "COME" ) {
			cin >> N;
			ChangeEnd(queue, N);
		}
		else if (ORD == "WORRY") {
			cin >> N;
			Worry(queue, N);
		}
        else if (ORD == "QUIET") {
            cin >> N;
            Quiet(queue, N);
        }
		else if (ORD == "WORRY_COUNT") {
			cout << WorryCount(queue) << endl;
		}
		Q--;
	}
	return 0;
}