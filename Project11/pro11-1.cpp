#include <iostream>
#include <string>
using namespace std;
class Car {
	int speed = 0;
	int gear;//����Ÿ�
	string color;//����
public:
	void setGear(int newGear) { gear = newGear; }
	void setColor(string color) { this->color = color; }
	void speedUp(int increment) { speed += increment; }
	void speedDown(int decrement) { speed -= decrement; }
	void showCar() { cout << "����ӵ� =" << speed << "����Ÿ� =" << gear << "���� = " << color << endl; }
};
class SportsCar : public Car {//Car�� ��ӹ޴´�.
	bool turbo;
public:
	void setTurbo(bool newValue) { turbo = newValue; }
	void showSportCart(void) {
		showCar();
		if (turbo) cout << "turbo ������" << endl;
		else cout << "turbo �������� ����" << endl;
		//cout << speed << endl;
	}
};

int main() {
	SportsCar sc;
	sc.setColor("Red");
	sc.setGear(3);
	sc.speedUp(100);
	sc.speedDown(30);
	sc.setTurbo(true);
	sc.showSportCart();
	return 0;
}