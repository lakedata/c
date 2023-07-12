//7-10
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
	Power operator++(int x);//후위++ 연산자 함수 선언
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator ++(int x) {
	Power tmp = *this;
	kick++;
	punch++;
	return tmp;//증가 이전 객체 상태 리턴
}
//Power Power::operator +=(Power op2) {
//	return Power(kick += op2.kick, punch += op2.punch);//합한 결과 리턴
//}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a++;
	a.show();
	b.show();
}