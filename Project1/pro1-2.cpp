#include <iostream>
using namespace std;

int main() {
	int score;
	cout << "������ �Է��ϼ���>>";
	cin >> score;
	if (score > 100 || score < 0) {
		cout << "�߸��� ���� �Դϴ�";
		return 0;
	}
	if (score >= 90)
		cout << "A �Դϴ�";
	else if (score >= 80)
		cout << "B �Դϴ�";
	else if (score >= 70)
		cout << "C �Դϴ�";
	else if (score >= 60)
		cout << "D �Դϴ�";
	else
		cout << "F �Դϴ�";
}