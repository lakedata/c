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
	Power operator += (Power op2);//+= 연산자 함수 선언
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator += (Power op2) {
	kick = kick + op2.kick;//kick 더하기
	punch = punch + op2.punch; //punch 더하기
	return *this; //합한 결과 리턴
}
//Power Power::operator +=(Power op2) {
//	return Power(kick += op2.kick, punch += op2.punch);//합한 결과 리턴
//}

int main() {
	Power a(3, 5), b(4, 5), c;
	a.show();
	b.show();
	c = a += b;
	a.show();
	c.show();
}