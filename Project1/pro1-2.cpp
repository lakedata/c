#include <iostream>
using namespace std;

int main() {
	int score;
	cout << "점수를 입력하세요>>";
	cin >> score;
	if (score > 100 || score < 0) {
		cout << "잘못된 점수 입니다";
		return 0;
	}
	if (score >= 90)
		cout << "A 입니다";
	else if (score >= 80)
		cout << "B 입니다";
	else if (score >= 70)
		cout << "C 입니다";
	else if (score >= 60)
		cout << "D 입니다";
	else
		cout << "F 입니다";
}