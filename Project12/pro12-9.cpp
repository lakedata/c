#include <iostream>
using namespace std;

int min() {
	int x[] = { 1, 10, 100, 5, 4 };
	if (search(100, x, sizeof(x) / 4)) //100이 배열 x에 포함되어 있는가?
		cout << "100이 배열 x에 포함되어 있다.";
	else
		cout << "100이 배열 x에 포함되어 있지 있다.";
	cout << end;

	char c[] = { 'h', 'e', 'l', 'l', 'o' };
	if (serach('e', c, 5))//'e'가 배열 c에 포함되어 있는가?
		cout << "e가 배열 c에 포함되어 있다.";
	else
		cout << "e가 배열 c에 포함되어 있지 있다."";
	cout << endl;
}