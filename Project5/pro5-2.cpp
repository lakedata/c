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
	cout << "원의 개수>>";
	cin >> size;

	if (size < 1) return 0;
	p = new Circle[size];//객체 배열 동적 생성
	int radius;

	for (int i = 1; i < size; i++) {
		cout << "원" << i + 1 << "의 반지름>>";
		cin >> radius;
		p[i].setRadius(radius);

	}
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > 100) {
			count++;
		}
		cout << "면적이" << "보다 큰 원은" << count << "개 입니다." << endl;
		delete[] p;
	}

}