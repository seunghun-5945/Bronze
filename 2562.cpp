#include <iostream>
using namespace std;

int main() {
	int num[9];

	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}

	int max = num[0];
	int cnt = 1;
	for (int j = 1; j < 9; j++) {
		if (num[j] > max && num[j] < 100) {
			max = num[j];
			cnt = j + 1;
		}
	}
	cout << max << endl;
	cout << cnt;

	return 0;
}