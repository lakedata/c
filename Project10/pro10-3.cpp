//7-8
#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power operator++ ();//전위 ++연산자 함수 선언
};

void Power::show() {
	cout << "kick=" << kick << "," << "punch=" << punch << endl;
}
Power Power::operator++() {
	kick++;
	punch++;
	return *this;//변경된  객체 자신(객체 a)리턴
}