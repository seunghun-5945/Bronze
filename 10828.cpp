#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt;
	int stack[10000];
	int size = 0;
	string command;

	cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		cin >> command;

		if (command == "push") {
			int num;
			cin >> num;
			stack[size] = num;
			size++;
		}

		else if (command == "top") {
			if (size == 0) {
				cout << -1 << endl;
			}
			else {
				cout << stack[size - 1] << endl;
			}
		}

		else if (command == "size") {
			cout << size << endl;
		}

		else if (command == "empty") {
			if (size == 0) {
				cout << 1 << endl;
			}
			else {
				cout << 0 << endl;
			}
		}

		else if (command == "pop") {
			if (size == 0) {
				cout << -1 << endl;
			}
			else {
				cout << stack[size - 1] << endl;
				size--;
			}
		}
	}

	return 0;
}

// 이게 맞나 모르겠다...