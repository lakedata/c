#include <iostream>
#include <string>
using namespace std;
class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) { this->x = x, this->y = y; }
	void show() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

int main() {
	MyStack<int*>ipStack;//int*���� �����ϴ� ����
	int* p = new int[3];
	for (int i = 0; i < 3; i++) p[i] = i * 10;//0.10.20���� �ʱ�ȭ
	ipStack.push(p);//������ Ǫ��
	int* q = ipStack.pop();//������ ��
	for (int i = 0; i < 3; i++) cout << q[i] << ' ';//ȭ�� ���
	cout << endl;
	delete[] p;

	MyStack<Point> pointStack;//Poin ��ü ���� ����
	Point a(2, 3),b;
	pointStack.push(a);//Point ��ü a Ǫ��, ����Ǿ� ����
	b = pointStack.pop();
	b.show();//Point ��ü ���

	MyStack<Point> pointStack;//Point ��ü ���� ����
	Point a(2, 3), b;
	pointStack.push(a);
	b = pointStack.pop();
	b.show();

	MyStack<Point*> pStack;//Point*������ ����
	pStack.push(new Point(10, 20));
	Point* pPoint = pStack.pop();
	pPoint->show();

	MyStack<string> stringStack;
	string s = "c++";
	stringStack.push(s);
	stringStack.push("java");
	cout << stringStack.pop() << ' ';
	cout << stringStack.pop() << endl;
}

template<class T>
class MyStack {
	int tos;
	T data;
public:
	MyStack();
	void push(T element);
	T pop();
};

template<class T>
MyStack<T>::MyStack() {//������
	tos = -1;
}
template <class T>
void MyStack<T>::push(T element) {
	if (tos == 99) {
		cout << "stack full"; return;
	}
	tos++;
	data[tos] = element;
}
template<class T>
T MyStack<T>::pop() {
	T retData;
	if (pos == -1) {
		cout << "stack empty"
		return 0;
	}
	reData = data[tos--]; returjn retData;
}