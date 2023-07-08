#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	Rectangle(int x, int y);
	int getArea();
};

Rectangle::Rectangle(int x, int y) {
	width = x;
	height = y;
}

int Rectangle::getArea() {
	return width * height;
}

int main() {
	//Rectangle rect;
	//rect.width = 3;
	//rect.height = 5;
	Rectangle rect(3, 5);
	cout << "사각형 면적은" << rect.getArea() << endl;
}