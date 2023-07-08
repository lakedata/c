#include <iostream>
#include <string>
using namespace std;
class Car {
private://멤버변수 선언
	int speed;//속도
	string color;//색상
public:
	void setSpeed(int speed) { this->speed = speed; }
	void setColor(string color) { this->color = color; }
	//멤버 함수 선언
	int speedUP() { return speed += 10; }
	int speedDown() { return speed -= 10; }
	void printCar() {
		cout << "현재 차의 색상은" << color;
		cout << "\t현재 차의 속도은" << speed << endl;
	}
};

Car globalCar;//전역 객체

int main() {
	Car localCar;//지역객체
	globalCar.setColor("white"); globalCar.setSpeed(100);
	globalCar.speedUP(); globalCar.printCar();

	localCar.setColor("red"); localCar.setSpeed(200);
	localCar.speedDown(); localCar.printCar();
	return 0;
}