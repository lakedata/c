#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	int i;
	vector<int> intV(5);
	int* pV = &intV[0];
	cout << "������ 5�� �Է�";
	for (i = 0; i < 5; i++) {
		cin >> (*pV); pV++; //���� ���Ҹ� ����Ŵ
	}
	pV = &intV[0]; cout << "������ 5�� ���: ";
	
	for (it; i < 5; i++) {
		cout << *pV << "\t" << pV++;
	}
	cout << endl;
}