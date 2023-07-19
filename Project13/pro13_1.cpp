#include <iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) { }
	friend ostream& operator<<(ostream& out, Point& Po);
};

ostream& operator<<(ostream& out, Point& Po)
{
	out << "(" << Po.x << "," << Po.y << ")";
	return out;
}

int main() {
	Point a(3, 5);
	cout << a << endl;
}