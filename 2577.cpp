#include <iostream>
using namespace std;

int main() {
	int A, B, C, result, balance =0;
	int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
	cin >> A >> B >> C;
	while ((A < 100 || A >1000) || (B < 100 || B >1000) || (C < 100 || C >1000)) {
		cin >> A >> B >> C;
	}

	result = A * B * C;
	while (result > 0) {
		balance = result % 10;
		if (balance == 0) zero++;
		if (balance == 1) one++;
		if (balance == 2) two++;
		if (balance == 3) three++;
		if (balance == 4) four++;
		if (balance == 5) five++;
		if (balance == 6) six++;
		if (balance == 7) seven++;
		if (balance == 8) eight++;
		if (balance == 9) nine++;
		result /= 10;
	}

	cout << zero << endl;
	cout << one << endl;
	cout << two << endl;
	cout << three << endl;
	cout << four << endl;
	cout << five << endl;
	cout << six << endl;
	cout << seven << endl;
	cout << eight << endl;
	cout << nine << endl;
	return 0;
}

// 너무 원시적인 방법이고 코드가 쓸데없이 너무 길어서 수정이 필요 할 것 같다.