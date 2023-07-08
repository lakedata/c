#include <iostream>
using namespace std;
namespace Graphic {
	int maximun = 100;
}
namespace Math{
	int maximum = 65536;
	int add(int a, int b) { return a + b; }
	int sub(int a, int b) { return a - b; }
}
int main() {
	cout << "Radius Maximum = " << Graphic::maximun << endl;
	cout << "Interger Maximum = " << Math::maximum << endl;
	cout << "Interger Add = " << Math::add(2,4) << endl;
}
//using namespace·Î »ı·«