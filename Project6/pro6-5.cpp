#include <iostream>
using namespace std;
class MyIntStack {
	int *p;
	int tos;
public:
	MyIntStack(int size);
	bool push(int n);
	bool pop(int& a);
};
MyIntStack::MyIntStack(int size) {
	p = new int[size];
	tos = 0;
}
bool MyIntStack::push(int n) {
	if (tos == 10)
		return false;
	p[tos] = n;
	tos++;
	return true;
}
bool MyIntStack::pop(int& refn) {
	if (tos == 0)
		return false;
	refn = p[tos];
	return true;
}
int main() {
	MyIntStack a(10);
	for (int i = 0; i < 10; i++)
		if (a.push(i)) cout << i << ' ';
	cout << endl << "stack full" << endl;
	int n;
	for (int i = 0; i < 10; i++)
		if (a.pop(n)) cout << n << ' ';
	cout << endl << "stack empty" << endl;
}