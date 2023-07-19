#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int i, value;
	vector<int> intV;

	for (i = 0; i < 5; i++) {
		cout << "°ª ÀÔ·Â:";
		cin >> value;
		intV.push_back(value);
	}

	for (i = 0; i < 5; i++) {
		cout << intV[i] << "\t";
	}
	cout << endl;

	return 0;
}
