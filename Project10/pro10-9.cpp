#include <iostream>
using namespace std;
class Stack {
	int size;	int* mem;//���� �޸� �Ҵ� ���� ����
	int tos;//top of stack -1�̸� ������ �����.
public:
	Stack(int size = 4) {
		this->size = size;	mem = new int[size];//int [10] ���� �Ҵ�
		tos = -1;//������ �������
	}
	~Stack() { delete[] mem; }
	Stack& operator << (int n); Stack& operator >> (int& n);
	bool operator!();
};
Stack& Stack::operator << (int n) {//Ǫ��
	if (tos == size-1) {
		return *this;
	}
	tos++;//���� top�� ����
	mem[tos] = n; //top�� ��
	return *this;
}
Stack& Stack::operator >> (int& n) {
	if (tos == -1) {
		return *this;
	}
	n = mem[tos]; //top�� ��
	tos--;//���� top ����
	return *this;
}
bool Stack::operator!() {
	if (tos == -1)
		return true;
	else
		return false;
}

int main() {
	Stack stack(10);
	stack << 1 << 2 << 3 << 4 << 5;//3,5,10�� ������� Ǫ��
	while (true) {
		if (!stack) break;//���� empty
		int x;
		stack >> x;//������ ž�� �̾� ���� ��
		cout << x << ' ';
	}
	cout << endl;
}