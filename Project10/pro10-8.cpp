#include <iostream>
using namespace std;
class Complex {
private:
	double re, im;
public:
	Complex(double r) {
		re = r; im = 0;
	}
	Complex(double r = 0, double i = 0) : re(r), im(i) {}
	void Output() {
		cout << re << "+" << im << "i" << endl;
	}

	Complex& operator+=(Complex);
	Complex& operator -();
	friend Complex operator+(Complex&, Complex&);
	friend Complex operator++(Complex&);
	friend Complex operator++(Complex&, int);
	friend ostream& operator<<(ostream& os, Complex&);
};
Complex& Complex::operator+=(Complex a2) {
	//return Complex(this->re += a2.re, this->im += a2.im);
	this->re = this->re + a2.re; this->im = this->im + a2.im; return *this;
}
Complex& Complex::operator -() {
	this->re = -(this->re); this->im = -(this->im);
	return *this;

}

Complex operator+(Complex& a1, Complex& a2) {
	return Complex(a1.re + a2.re, a1.im + a2.im);
	//Complex tmep; temp.re = a1.re + a2.r; temp.im = a1.im + a2.im + a2.im; return temp;
}
Complex operator++(Complex& a1) {
	a1.re++; a1.im++; return a1;
}
Complex operator++(Complex& a1, int) {
	Complex tmp = a1; a1.re++; a1.im++;
	return tmp;
}

ostream& operator<<(ostream& os, Complex& c1) {
	os << "(" << c1.re << "," << c1.im << "i" << ")" << endl;
	return os;
}

int main() {
	Complex c1(1, 2), c2(3, 4), c(9, 200);
	c1.Output(); c2.Output(); c1 += c2; c1.Output();
	Complex c3 = c1 + c2;
	Complex c4 = c1 += c2, c5, c6; c3.Output();
	c5 = ++c4; c4.Output(); c5.Output();
	c6 = c4++; c4.Output(); c6.Output();
	c2 = -c2; cout << c2; cout << c; return 0;
}