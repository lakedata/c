#include <iostream>
using namespace std;
class Point {
private:
	T x, y;
public:
	Point(T a = 0, T b = 0) : x(a), y(b) { }
	template <typename T>//friend 함수인 경우 템플릿 선언
	friend ostream& operator<<(ostream& out, Point<T>& Po);
};

template <typename T>
ostream& operator<<(ostream& out, Point& Po)
{
	out << "(" << Po.x << "," << Po.y << ")";
	return out;
}


int main() {
	Point a(3, 5);
	cout << a << endl;
}