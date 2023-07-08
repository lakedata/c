#include <iostream>
#include <string>
using namespace std;
class Date {
	int day;
	int month;
	int year;
public:
	Date(int y, int m, int d);
	Date(string s);
	void show();
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
};
Date::Date(int y, int m, int d) { year = y; month = m; day = d; }
Date::Date(string s) {	
	int index1 = s.find("/");
	string y = s.substr(0, index1);
	int index2 = s.find("/", index1 + 1);
	string m = s.substr(index1 + 1, index2 - index1 - 1);
	string d = s.substr(index2 + 1, s.length());
//C++String 함수를 이용하는 방법
	year = stoi(y);
	month = stoi(m);
	day = stoi(d);
}
void Date::show() { cout << year << "년" << month << "월" + day << "일"; }

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	birth.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}