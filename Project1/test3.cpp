//예제3-1의 if-else를 swithch를 이용하여 구현하라.
#include <iostream>
using namespace std;

int main() {
	int score, div;
	cout << "점수를 입력하세요>>";
	cin >> score;
	if (score > 100 || score < 0) {
		cout << "잘못된 점수 입니다";
		return 0;
	}
	div = score / 10;

	switch (div) {
	case 10:
	case 9:
		cout << "A 입니다"; break;
	case 8:
		cout << "B 입니다"; break;
	case 7:
		cout << "C 입니다"; break;
	case 6:
		cout << "D 입니다"; break;
	default:
		cout << "F 입니다"; break;
	}
}