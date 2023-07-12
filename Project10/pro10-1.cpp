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
	Power operator += (Power op2);//+= ������ �Լ� ����
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power Power::operator += (Power op2) {
	kick = kick + op2.kick;//kick ���ϱ�
	punch = punch + op2.punch; //punch ���ϱ�
	return *this; //���� ��� ����
}
//Power Power::operator +=(Power op2) {
//	return Power(kick += op2.kick, punch += op2.punch);//���� ��� ����
//}

int main() {
	Power a(3, 5), b(4, 5), c;
	a.show();
	b.show();
	c = a += b;
	a.show();
	c.show();
}