#include <iostream>
using namespace std;
class Circle {
    int radius;
public:
    void setRadius(int radius);
    double getArea();
};

int main()
{
    Circle c[3];
    int radius;
    
    for (int i = 0; i < 3; i++) {
        cout << "원" << i << "의 반지름" << "radius";
        c[i].setRadius(radius);
        c[i].setRadius(radius);
        //(c+i)->setRadius(radius); 또는 (*(c+i)).setRadius(radius);
    }
    int count = 0;
    for (int i = 0; i < 3; i++) {
        if (c[i].getArea() > 100) {
            count++;
        }
    }
    cout << "면적이 100보다 큰 원은" << "개 입니다" << endl;
}
