//두 Power 객체를 더하는 += 연산자 작성(외부함수)
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
	friend Power operator += (Power& op1, Power op2);
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power operator += (Power &op1, Power op2) {
	op1.kick = op1.kick + op2.kick;//kick 더하기
	op1.punch = op1.punch + op2.punch; //punch 더하기
	return op1; //합한 결과 리턴
}
//Power Power::operator +=(Power op2) {
//	return Power(kick += op2.kick, punch += op2.punch);//합한 결과 리턴
//}

int main() {
	Power a(3, 5), b(4, 5), c;
	a.show();
	b.show();
	c = a += b;//파워 객체 더하기
	a.show();
	c.show();
}