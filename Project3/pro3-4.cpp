#include <iostream>
#include <string>
using namespace std;
class Car {
private://������� ����
	int speed;//�ӵ�
	string color;//����
public:
	void setSpeed(int speed) { this->speed = speed; }
	void setColor(string color) { this->color = color; }
	//��� �Լ� ����
	int speedUP() { return speed += 10; }
	int speedDown() { return speed -= 10; }
	void printCar() {
		cout << "���� ���� ������" << color;
		cout << "\t���� ���� �ӵ���" << speed << endl;
	}
};

Car globalCar;//���� ��ü

int main() {
	Car localCar;//������ü
	globalCar.setColor("white"); globalCar.setSpeed(100);
	globalCar.speedUP(); globalCar.printCar();

	localCar.setColor("red"); localCar.setSpeed(200);
	localCar.speedDown(); localCar.printCar();
	return 0;
}