#include <iostream>
#include <string>
using namespace std;
class Shape {
	int x, y;
public:
	Shape() {
		cout << "Shape持失切()" << endl;
	}
	Shape(int xloc, int yloc) :x(xloc), y(yloc) {
		cout << "Shape持失切(" << xloc << "," << yloc << ")" << endl;
	}
	~Shape() {
		cout << "Shape社瑚切()" << endl;
	}
};

class Rectangle :public Shape {
	int width, height;
public:
	Rectangle(int x, int y, int w, int h);
	~Rectangle() {
		cout << "Rectangle社瑚切()" << endl;
	}
};

Rectangle::Rectangle(int x, int y, int w, int h) : Shape(x, y) {
	width = w;
	height = h;
	cout << "Rectangle持失切()" << x << "," << y << "," << w << "," << h << ")" << endl;
}

int main() {
	Rectangle r(4, 6, 100, 100);
	return 0;
}