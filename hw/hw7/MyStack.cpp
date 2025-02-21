#include <iostream>
using namespace std;

class BaseArray {
	int capacity;
	int *mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() { delete []mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyStack :public BaseArray {
	int tos = 0;
public:
	MyStack(int capacity):BaseArray(capacity) { this->tos = tos; }
	void push(int n) { tos++;  put(tos, n); }//stack에 삽입
	int pop() {//stack에 삭제
		int pop = get(tos); 
		tos--;
		return pop;
	}
	int capacity() { return getCapacity(); }
	int length() { return tos; }
};

int main() {
	MyStack mStack(100); int n;
	cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n; mStack.push(n); // 스택에 푸시
	}
	cout << "스택 용량:" << mStack.capacity() << ", 스택 크기:" << mStack.length() << endl;
	cout << "스택의 모든 원소를 팝하여 출력한다>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' '; // 스택에서 팝
	}
	cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
}