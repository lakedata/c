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
        cout << "��" << i << "�� ������" << "radius";
        c[i].setRadius(radius);
        c[i].setRadius(radius);
        //(c+i)->setRadius(radius); �Ǵ� (*(c+i)).setRadius(radius);
    }
    int count = 0;
    for (int i = 0; i < 3; i++) {
        if (c[i].getArea() > 100) {
            count++;
        }
    }
    cout << "������ 100���� ū ����" << "�� �Դϴ�" << endl;
}
