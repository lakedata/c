#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};
void Circle::setRadius(int raduis) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	//Circle cir[size]
	//Circle* p = cir;

	Circle* p;
	int size;
	cout << "���� ����>>";
	cin >> size;

	if (size < 1) return 0;
	p = new Circle[size];//��ü �迭 ���� ����
	int radius;

	for (int i = 1; i < size; i++) {
		cout << "��" << i + 1 << "�� ������>>";
		cin >> radius;
		p[i].setRadius(radius);

	}
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > 100) {
			count++;
		}
		cout << "������" << "���� ū ����" << count << "�� �Դϴ�." << endl;
		delete[] p;
	}

}