#include <iostream>
#include <cstdlib>	// 이번에 사용할 rand() 함수가 있는 라이브러리
#include <ctime>
#include <algorithm>	//	굳이 구현하는 방법도 있겠지만 간단한 정리를 위해 sort 정렬을 사용하기 위한 라이브러리
using namespace std;

class diff20 {
	int check[20], data[10];
public:
	void init();					//	data 배열과 check 배열을 0으로 초기화 하는 멤버 함수
	void prnbyCreatedOrder();		//	생성된 정수를 순서에 따라 출력하는 멤버 함수
	void prnbyDecreasingOrder();	//	생성된 정수를 감소하는 순서대로 출력하는 멤버 함수
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
	srand(time(0));	//	현재 시간을 기반으로 시드seed 값을 설정하는 코드로서 매번 프로그램이 실행 될 때마다 다양한 난수를 생성함

	diff20 diff20;
	diff20.init();
	diff20.prnbyCreatedOrder();
	diff20.prnbyDecreasingOrder();
}

//	algorithm 라이브러리의  sort 기능을 공부해야 하였고, check 배열이 중복확인을 위한 기능을 담당하고 data는 10개의 겹치지 않는 요소들의 모임이라는 사실을 알아야 풀 수 있었다.

/*
문제지의 요청에 따르면
void diff20::prnbyCreatedOrder() {

	for (int i = 1; i <= 10; i++) {
		int rem = rand() % 20;	//	20 보다 큰 수가 남으면 나눠 떨어지므로 19 까지 남게 됨, 따라서 0 부터 19 까지의 난수 생성
		if (check[rem] == 0) {
			data[i - 1] = rem + 1;
			check[rem] = i;	//	만약 check 배열의 어떠한 요소의 랜덤 값이 0이라면 1로 바꿈 ex) check[15] = 0 이라면 check[15] = 1 로 바꿔줌
		}

	}

	for (int i = 0; i < 10; i++) {
		cout << data[i] << ' ';
	}
	cout << endl;
}
이렇게 하는것이 맞는 것 같은데 for문과 문제지의 요구에 따라서는 답을 못구하겠어서 문제지의 몇 요청을 무시하고 while 반복문을 사용하였다.
*/