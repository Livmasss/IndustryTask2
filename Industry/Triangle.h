#pragma once

class Triangle {
private:
    double a, b, c;

public:
    Triangle();
    Triangle(double a, double b, double c);

    bool exst_tr();
    void set(double a, double b, double c);
    void show();
    double perimetr();
    double square();
};