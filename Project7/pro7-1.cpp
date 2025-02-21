//클래스에서 소멸자와 복사 생성자를 작성하여라.단 멤버변수 pBuf는 동적메모리로 할당한다.
#include <iostream>
#include <cstring>
using namespace std;
class MyString {
private:
	char* pBuf;//동적으로 할당된 메모리의 주소값 저장
public:
	MyString(const char* s = NULL);
	MyString(MyString& s); ~MyString();
	void print();//문자열을 화면에 출력
	size_t getSize();//문자열의 길이 반환
};
MyString::MyString(const char* s = NULL) {
	if (s == NULL) {
		pBuf = new char[1]; pBuf[0] = NULL;
	}
	else {
		pBuf = new char[strlen(s) + 1];
		strcpy_s(pBuf, strlen(s) + 1, s);
	}
}
//복사 생성자
MyString::MyString(MyString& s) {
	pBuf = new char[s.getSize() + 1];
	strcpy_s(pBuf, s.getSize() + 1, s.pBuf);
}
//소멸자
MyString::~MyString() {
	if (pBuf) delete[] pBuf;
}
void MyString::print() {
	cout << pBuf << endl;
}
size_t MyString::getSize() {
	return strlen(pBuf);
}
int main() {
	MyString str1;
	MyString str2("Hello");
	MyString str3 = "World!";
	MyString str4(str3);
	MyString str4 = str3;
	str1.print();
	str2.print();
	str3.print();
	str4.print();
	return 0;
}