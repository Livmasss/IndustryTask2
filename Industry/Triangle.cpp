#include <cmath>
#include <iostream>

using namespace std;
class Triangle {
private:
    double a, b, c;

public:
    Triangle() {
        a = 0;
        b = 0;
        c = 0;
    }
    Triangle(double a, double b, double c) {
        set(a, b, c);
        if (!exst_tr()) delete this;
    }

    bool exst_tr() {
        return a + b > c && a + c > b && b + c > a;
    }
    void set(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void show() {
        std::cout << "Стороны треуголника: " << a << " " << b << " " << c << "\n";
    }
    double perimetr() {
        return a + b + c;
    }
    double square() {
        double p = this->perimetr();
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
};