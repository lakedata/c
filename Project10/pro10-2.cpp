//�� Power ��ü�� ���ϴ� += ������ �ۼ�(�ܺ��Լ�)
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
	op1.kick = op1.kick + op2.kick;//kick ���ϱ�
	op1.punch = op1.punch + op2.punch; //punch ���ϱ�
	return op1; //���� ��� ����
}
//Power Power::operator +=(Power op2) {
//	return Power(kick += op2.kick, punch += op2.punch);//���� ��� ����
//}

int main() {
	Power a(3, 5), b(4, 5), c;
	a.show();
	b.show();
	c = a += b;//�Ŀ� ��ü ���ϱ�
	a.show();
	c.show();
}