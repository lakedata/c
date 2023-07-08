#include <iostream>
using namespace std;
class Point {
private:
    int x, y;

public:
    void SetXY(int a, int b) { x = a, y = b; }
    void Print() { cout << "(" << x << "," << y << ")" << endl; }
    void setX(int x) { this->x = x; }
};

int main(void) {
    Point P1;
    P1.SetXY(3, 4);
    P1.Print();
    P1.setX(10);
    //P1.x = 10;
    return 0;
}
