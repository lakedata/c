#include <iostream>
using namespace std;
class Complex {
private:
	int real;
	int image;
public:
	Complex(int x, int y) {
		real = x;
		image = y;
	}
	void showComplex() {
		cout << "(" << real << ", " << image << "i" << ")" << endl;
	}
};
void main() {
	Complex x(4, 5);
	Complex y(20, 10);
	x.showComplex();
	y.showComplex();
}