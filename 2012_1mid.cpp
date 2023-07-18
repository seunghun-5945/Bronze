#include <iostream>
#include <cstdlib>	// �̹��� ����� rand() �Լ��� �ִ� ���̺귯��
#include <ctime>
#include <algorithm>	//	���� �����ϴ� ����� �ְ����� ������ ������ ���� sort ������ ����ϱ� ���� ���̺귯��
using namespace std;

class diff20 {
	int check[20], data[10];
public:
	void init();					//	data �迭�� check �迭�� 0���� �ʱ�ȭ �ϴ� ��� �Լ�
	void prnbyCreatedOrder();		//	������ ������ ������ ���� ����ϴ� ��� �Լ�
	void prnbyDecreasingOrder();	//	������ ������ �����ϴ� ������� ����ϴ� ��� �Լ�
};

void diff20::init() {
	for (int i = 0; i < 20; i++) {
		check[i] = 0;
	}
	for (int i = 0; i < 10; i++) {
		data[i] = 0;
	}
}

void diff20::prnbyCreatedOrder() {
	int cnt = 0;
	while (cnt < 10) {
		int rem = rand() % 20;
		if (check[rem] == 0) {
			data[cnt] = rem + 1;
			check[rem] = 1;
			cnt++;
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << data[i] << ' ';
	}
	cout << endl;
}


void diff20::prnbyDecreasingOrder() {
	sort(data, data + 10, greater <int>());
	for (int i = 0; i < 10; i++) {
		cout << data[i] << ' ';
	}
}

int main() {
	srand(time(0));	//	���� �ð��� ������� �õ�seed ���� �����ϴ� �ڵ�μ� �Ź� ���α׷��� ���� �� ������ �پ��� ������ ������

	diff20 diff20;
	diff20.init();
	diff20.prnbyCreatedOrder();
	diff20.prnbyDecreasingOrder();
}

//	algorithm ���̺귯����  sort ����� �����ؾ� �Ͽ���, check �迭�� �ߺ�Ȯ���� ���� ����� ����ϰ� data�� 10���� ��ġ�� �ʴ� ��ҵ��� �����̶�� ����� �˾ƾ� Ǯ �� �־���.

/*
�������� ��û�� ������
void diff20::prnbyCreatedOrder() {

	for (int i = 1; i <= 10; i++) {
		int rem = rand() % 20;	//	20 ���� ū ���� ������ ���� �������Ƿ� 19 ���� ���� ��, ���� 0 ���� 19 ������ ���� ����
		if (check[rem] == 0) {
			data[i - 1] = rem + 1;
			check[rem] = i;	//	���� check �迭�� ��� ����� ���� ���� 0�̶�� 1�� �ٲ� ex) check[15] = 0 �̶�� check[15] = 1 �� �ٲ���
		}

	}

	for (int i = 0; i < 10; i++) {
		cout << data[i] << ' ';
	}
	cout << endl;
}
�̷��� �ϴ°��� �´� �� ������ for���� �������� �䱸�� ���󼭴� ���� �����ϰھ �������� �� ��û�� �����ϰ� while �ݺ����� ����Ͽ���.
*/