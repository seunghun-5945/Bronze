#include <iostream>
using namespace std;

// 함수

class Queue {
	int arr[100];
	int size;
public: Queue() {										//	기본 생성자
	size = 0;
}
	  void inqueue(int n) {								// 가장 최근에 저장된 값 다음에 저장
		  arr[size] = n;
		  size++;
	  }
	  void dequeue() {									// 가장 오래전에 저장된 값부터 나감
		  size--;
		  for (int i = 0; i < size; i++) {
			  arr[i] = arr[i + 1];
		  }
	  }
	  void showQue() {									// 큐에 저장된 모든 값을 보여줌
		  for (int i = 0; i <= size - 1; i++) {
			  cout << arr[i] << ' ';
		  }
		  if (size == 0) {
			  cout << "Queue 가 비었습니다.";
		  }
		  cout << endl;
	  }
	  void sortQ() {									//	가장 작은값부터 차례로 배열을 정렬시킴
		  for (int i = 0; i < size - 1; i++) {
			  for (int j = 0; j < size - i - 1; j++) {
				  if (arr[j] > arr[j + 1]) {
					  int temp = arr[j];
					  arr[j] = arr[j + 1];
					  arr[j + 1] = temp;
				  }
			  }
		  }
	  }
};

class Stack {
	int arr[100];
	int size;
public: Stack() {										//	기본 생성자
	size = 0;
}
	  void push(int n) {								//	가장 최근에 저장된 값 다음에 저장
		  arr[size] = n;
		  size++;
	  }
	  void pop() {										//	가장 최근에 저장된 값 부터 나감
		  if (size > 0) {
			  size--;
			  arr[size] = 0;
		  }
		  else {
			  cout << "Stack이 비었습니다." << endl;
		  }
	  }
	  void showStack() {								//	스택에 저장된 모든 값을 보여줌
		  for (int i = 0; i <= size - 1; i++) {
			  cout << arr[i] << ' ';
		  }
		  if (size == 0) {
			  cout << "Stack 이 비었습니다.";
		  }
		  cout << endl;
	  }
	  void sortQ() {									//	가장 작은값부터 차례로 배열을 정렬시킴
		  for (int i = 0; i < size - 1; i++) {
			  for (int j = 0; j < size - i - 1; j++) {
				  if (arr[j] > arr[j + 1]) {
					  int temp = arr[j];
					  arr[j] = arr[j + 1];
					  arr[j + 1] = temp;
				  }
			  }
		  }
	  }
};

void run() {
	int chooseA;
	int chooseB;
	Queue queue;
	Stack stack;
	while (true) {
		cout << "1 Queue 2 Stack 3 보기 4 정렬 5 종료 -> :";
		cin >> chooseA;

		if (chooseA == 1) {
			cout << "Queue" << endl;
			cout << "1 추가 2 빼기 입력 -> :";
			cin >> chooseB;

			if (chooseB == 1) {
				int num;
				cout << "input: "; cin >> num;
				queue.inqueue(num);
			}
			else if (chooseB == 2) {
				queue.dequeue();
				cout << "out" << endl;
			}

		}
		if (chooseA == 2) {
			cout << "Stack" << endl;
			cout << "1 추가 2 빼기 -> :";
			cin >> chooseB;

			if (chooseB == 1) {
				int num;
				cout << "input: "; cin >> num;
				stack.push(num);
			}
			else if (chooseB == 2) {
				queue.dequeue();
				cout << "out" << endl;
			}
		}
		if (chooseA == 3) {
			queue.showQue();
			stack.showStack();
		}
		if (chooseA == 4) {
			cout << "정렬을 진행합니다" << endl;
			queue.sortQ();
			stack.sortQ();
		}
		if (chooseA == 5) {
			break;
		}
	}
}
// main 실행

int main() {
	run();
	return 0;
}