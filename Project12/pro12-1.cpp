#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }
};

class Derived :public Base {
public:
	virtual void f() { cout << "Derived::f() called" << endl; }
};


class GrandDerived :public Derived {
public:
	virtual void f() { cout << "GrandDerived::f() called" << endl; }
};

int main() {
	GrandDerived g;
	Base* bp;
	Derived* dp;
	GrandDerived* gp;

	bp = dp = gp = &g; //upcasting

	bp->f();
	dp->f();
	gp->f();
}