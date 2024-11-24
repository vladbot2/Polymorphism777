
#include <iostream>

using namespace std;
//
//class FileHandler {
//public:
//    virtual void Display(const char* fileName) {
//        FILE* file = fopen(fileName, "rb");
//        if (!file) {
//            cout << "Cannot open file: " << fileName << endl;
//        }
//
//        int value;
//        while (fread(&value, sizeof(int), 1, file)) {
//            cout << static_cast<char>(value);
//        }
//        cout << endl;
//    }
//};
//
//class AsciiFileHandler : public FileHandler {
//public:
//    void Display(const char* fileName) override {
//        FILE* file = fopen(fileName, "rb");
//        if (!file) {
//            cout << "Cannot open file: " << fileName << endl;
//        }
//
//        int value;
//        while (fread(&value, sizeof(int), 1, file)) {
//            cout << value << "_";
//        }
//        cout << endl;
//    }
//};
//
//class BinaryFileHandler : public FileHandler {
//public:
//    void Display(const char* fileName) override {
//        FILE* file = fopen(fileName, "rb");
//        if (!file) {
//            cout << "Cannot open file: " << fileName << endl;
//        }
//
//        int value;
//        while (fread(&value, sizeof(int), 1, file)) {
//            for (int bit = 31; bit >= 0; --bit) {
//                cout << ((value >> bit) & 1);
//            }
//            cout << " ";
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    const char* fileName = "example.txt";
//
//    FileHandler baseHandler;
//    baseHandler.Display(fileName);
//
//    AsciiFileHandler asciiHandler;
//    asciiHandler.Display(fileName);
//
//    BinaryFileHandler binaryHandler;
//    binaryHandler.Display(fileName);
//}

//2
//#include <iostream>
//
//class Shape {
//public:
//    virtual void Show() const = 0;
//    virtual ~Shape() = default;
//};
//
//class Square : public Shape {
//private:
//    double x, y, side;
//
//public:
//    Square(double x, double y, double side) : x(x), y(y), side(side) {}
//
//    void Show() const override {
//        cout << "Square: Top-left corner " << x << "  " << y << "  Side length: " << side << endl;
//    }
//};
//
//class Rectangle : public Shape {
//private:
//    double x, y, width, height;
//
//public:
//    Rectangle(double x, double y, double width, double height) : x(x), y(y), width(width), height(height) {}
//
//    void Show() const override {
//        cout << "Rectangle: Top-left corner " << x << "  " << y << " Width: " << width << "  Height: " << height << endl;
//    }
//};
//
//class Circle : public Shape {
//private:
//    double x, y, radius;
//
//public:
//    Circle(double x, double y, double radius) : x(x), y(y), radius(radius) {}
//
//    void Show() const override {
//        cout << "Circle: Center  " << x << "  " << y << "  Radius: " << radius << endl;
//    }
//};
//
//int main() {
//    Shape* square = new Square(1.0, 1.0, 5.0);
//    Shape* rectangle = new Rectangle(2.0, 2.0, 4.0, 6.0);
//    Shape* circle = new Circle(3.0, 3.0, 7.0);
//
//    square->Show();
//    rectangle->Show();
//    circle->Show();
//
//    delete square;
//    delete rectangle;
//    delete circle;
//}
