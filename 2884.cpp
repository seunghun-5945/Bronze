#include <iostream>
using namespace std;

int main() {
	int H, M;
	cin >> H >> M;
	while ((-1 > H || H > 23) || (0 > M || M > 60)) {
		cin >> H >> M;
	}
	if (M >= 45) {
		cout << H << ' ' << (M - 45);
	}
	else if (H > 1 && M < 45) {
		cout << (H - 1) << ' ' << (M + 60 - 45);
	}
	else if (H < 1 && M < 45) {
		cout << (H + 23) << ' ' << (M + 60 - 45);
	}
	else if (H == 1 && M < 45) {
		H = 0;
		cout << H << ' ' << (M + 60 - 45);
	}
	return 0;
}

// �������� ����� ���� �����ϴ°� �������, �Ƹ� �ٸ� ������ ���� �� ����.