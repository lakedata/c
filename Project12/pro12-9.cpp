#include <iostream>
using namespace std;

int min() {
	int x[] = { 1, 10, 100, 5, 4 };
	if (search(100, x, sizeof(x) / 4)) //100�� �迭 x�� ���ԵǾ� �ִ°�?
		cout << "100�� �迭 x�� ���ԵǾ� �ִ�.";
	else
		cout << "100�� �迭 x�� ���ԵǾ� ���� �ִ�.";
	cout << end;

	char c[] = { 'h', 'e', 'l', 'l', 'o' };
	if (serach('e', c, 5))//'e'�� �迭 c�� ���ԵǾ� �ִ°�?
		cout << "e�� �迭 c�� ���ԵǾ� �ִ�.";
	else
		cout << "e�� �迭 c�� ���ԵǾ� ���� �ִ�."";
	cout << endl;
}