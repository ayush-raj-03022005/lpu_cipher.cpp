#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int breadth;

    Rectangle(int l, int b) : length(l), breadth(b) {}

    Rectangle(const Rectangle &rect) : length(rect.length), breadth(rect.breadth) {}

    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
};

int main() {
    Rectangle rect1(10, 5);
    Rectangle rect2 = rect1;

    rect1.display();
    rect2.display();

    return 0;
}
