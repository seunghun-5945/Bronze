#include <iostream>
using namespace std;

// �Լ�

class Queue {
	int arr[100];
	int size;
public: Queue() {										//	�⺻ ������
	size = 0;
}
	  void inqueue(int n) {								// ���� �ֱٿ� ����� �� ������ ����
		  arr[size] = n;
		  size++;
	  }
	  void dequeue() {									// ���� �������� ����� ������ ����
		  size--;
		  for (int i = 0; i < size; i++) {
			  arr[i] = arr[i + 1];
		  }
	  }
	  void showQue() {									// ť�� ����� ��� ���� ������
		  for (int i = 0; i <= size - 1; i++) {
			  cout << arr[i] << ' ';
		  }
		  cout << endl;
		  if (size == 0) cout << "false" << endl;
	  }
	  void sortQ() {									//	���� ���������� ���ʷ� �迭�� ���Ľ�Ŵ
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
	  void empty() {
		  if (size == 0) cout << "true" << endl;
		  else cout << "false" << endl;
	  }
	  void top() {
		  if (size == 0) cout << "top �� �����ϴ�" << endl;
		  else cout << arr[size - 1] << endl;
	  }
};

class Stack {
	int arr[100];
	int size;
public: Stack() {										//	�⺻ ������
	size = 0;
}
	  void push(int n) {								//	���� �ֱٿ� ����� �� ������ ����
		  arr[size] = n;
		  size++;
	  }
	  void pop() {										//	���� �ֱٿ� ����� �� ���� ����
		  if (size > 0) {
			  size--;
			  arr[size] = 0;
		  }
	  }
	  void showStack() {								//	���ÿ� ����� ��� ���� ������
		  for (int i = 0; i <= size - 1; i++) {
			  cout << arr[i] << ' ';
		  }
		  cout << endl;
		  if (size == 0) cout << "false" << endl;
	  }
	  void sortQ() {									//	���� ���������� ���ʷ� �迭�� ���Ľ�Ŵ
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
	  void empty() {
		  if (size == 0) cout << "true" << endl;
		  else cout << "false" << endl;
	  }
	  void top() {
		  if (size == 0) cout << "top �� �����ϴ�" << endl;
		else  cout << arr[size-1] << endl;
	  }
};

void run() {
	int chooseA;
	int chooseB;
	Queue queue;
	Stack stack;
	while (true) {
		cout << "1 Queue 2 Stack 3 ���� 4 ���� 5 empty 6 top 7 ���� -> :";
		cin >> chooseA;

		if (chooseA == 1) {
			cout << "Queue" << endl;
			cout << "1 �߰� 2 ���� �Է� -> :";
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
			cout << "1 �߰� 2 ���� -> :";
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
			cout << "������ �����մϴ�" << endl;
			queue.sortQ();
			stack.sortQ();
		}
		if (chooseA == 5) {
			queue.empty();
			stack.empty();
		}
		if (chooseA == 6) {
			queue.top();
			stack.top();
		}
		if (chooseA == 7) {
			break;
		}
	}
}
// main ����

int main() {
	run();
	return 0;
}