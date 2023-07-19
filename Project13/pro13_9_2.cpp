#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	int i;
	vector<int> intV(5);
	int* pV = &intV[0];
	cout << "정수값 5개 입력";
	for (i = 0; i < 5; i++) {
		cin >> (*pV); pV++; //다음 원소를 가리킴
	}
	pV = &intV[0]; cout << "정수값 5개 출력: ";
	
	for (it; i < 5; i++) {
		cout << *pV << "\t" << pV++;
	}
	cout << endl;
}