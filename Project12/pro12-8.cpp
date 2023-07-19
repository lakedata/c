#include <iostream>
using namespace std;

int Sum(int a, int b)
{
	int c = a + b;
	return c;
}
double Sum(double a, double b) {
	double c = a + b;
	return c;
}
char Sum(char a, char b)
{
	char c = a + b;
	return c;
}

template <class T>
T sum(T& a, T& b) {
	T c = a + b;
	return c;
}
int main(void) {


	cout << Sum(1, 2) << endl;
	cout << Sum(1.1, 2.2) << endl;
	cout << Sum('1', '2') << endl;

	return 0;
}