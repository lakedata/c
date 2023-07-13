#include <iostream>
#include <string>
using namespace std;
class Car {
	int speed = 0;
	int gear;//주행거리
	string color;//색상
public:
	void setGear(int newGear) { gear = newGear; }
	void setColor(string color) { this->color = color; }
	void speedUp(int increment) { speed += increment; }
	void speedDown(int decrement) { speed -= decrement; }
	void showCar() { cout << "현재속도 =" << speed << "주행거리 =" << gear << "색상 = " << color << endl; }
};
class SportsCar : public Car {//Car를 상속받는다.
	bool turbo;
public:
	void setTurbo(bool newValue) { turbo = newValue; }
	void showSportCart(void) {
		showCar();
		if (turbo) cout << "turbo 장착됨" << endl;
		else cout << "turbo 장착되지 않음" << endl;
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