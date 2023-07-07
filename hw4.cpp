#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
class Book {
	char* title; // 제목 문자열
	int price; // 가격
public:
	Book(const char* title, int price);
	Book(const Book& b); // 깊은 복사 복사 생성자 작성
	~Book(); void set(const  char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};
//클래스에서 소멸자와 복사 생성자를 작성하여라.단 멤버변수 title는 동적메모리로 할당한다.
// 생성자
Book::Book(const char* title, int price) {
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
	this->price = price;
}
Book::Book(const Book& b) {
	int len = strlen(b.title);
	this->title = new char[len + 1];
	strcpy(this->title, b.title);
	this->price = b.price;
}

Book::~Book() {
	if (title) {
		delete[] title;
	}
}
void Book::set(const char* title, int price) { //
//if(this->title) delete [] this->title;
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
	this->price = price;
}
int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}