//0010
#include<iostream>
using namespace std;

int main() {

	int x[3] = { 1, 0, 0 };
	int n; //how many actions
	string actions;

	cin >> actions;
	n = actions.length();

	for (int i = 0; i < n; i++) {
		if (actions[i] == 'A') {
			if (x[0] == 1) {
				x[0] = 0;
				x[1] = 1;
			}
			else if (x[1] == 1) {
				x[0] = 1;
				x[1] = 0;
			}
		}
		else if (actions[i] == 'B') {
			if (x[1] == 1) {
				x[1] = 0;
				x[2] = 1;
			}
			else if (x[2] == 1) {
				x[1] = 1;
				x[2] = 0;
			}
		}
		else if (actions[i] == 'C') {
			if (x[0] == 1) {
				x[0] = 0;
				x[2] = 1;
			}
			else if (x[2] == 1) {
				x[0] = 1;
				x[2] = 0;
			}
		}
	}

	//result
	for (int i = 0; i < 3; i++) {
		if (x[i] == 1) {
			cout << i + 1;
		}
	}

	return 0;
}