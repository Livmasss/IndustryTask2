#include <iostream>
#include <cmath>

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
        if (!exst_tr()) set(0, 0, 0);
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
        double p = this->perimetr()/2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
};

class Circle {
private:
    float radius;
    float x_centre;
    float y_centre;
public:
    Circle() {}
    Circle(float r, float x, float y) {
        x_centre = x;
        y_centre = y;
        radius = r;
    }
    void set_circle(float r, float x, float y) {
        x_centre = x;
        y_centre = y;
        radius = r;
    }
    float getRadius() { return radius; }
    float getX_centre() { return x_centre; }
    float getY_centre() { return y_centre; }
    float square() {
        return 3.14 * radius * radius;
    }
    bool triangle_around(float a, float b, float c) {
        Triangle tr = Triangle(a, b, c);
        float temp = a * b * c / 4;
        return (radius == temp / tr.square());
    }
    bool triangle_in(float a, float b, float c) {
        Triangle tr = Triangle(a, b, c);
        if (tr.perimetr() == 0) return false;
        return ((2 * tr.square()) / tr.perimetr());
    }
    bool check_circle(float r, float x_cntr, float y_cntr) {
        float dx = abs(x_centre - x_cntr);
        float dy = abs(y_centre - y_cntr);
        float s = sqrt(dx * dx + dy * dy);

        return ((s < radius + r) && (s > abs(radius - r)));
    }
};

class Figure {
private:
    float x1, x2, x3, x4;
    float y1, y2, y3, y4;
    float s;
    float p;
    float sides[4];
    float d1, d2;

    float angle(float a, float b, float d) {
        float temp = a * a + b * b - d * d;
        temp = temp / (2 * a * b);
        return acos(temp);
    }
public:
    Figure() {};
    Figure(float x1, float x2, float x3, float x4, 
        float y1, float y2, float y3, float y4) {
        this->x1 = x1;
        this->x2 = x2;
        this->x3 = x3;
        this->x4 = x4;
        this->y1 = y1;
        this->y2 = y2;
        this->y3 = y3;
        this->y4 = y4;

        float dx = abs(x1 - x2);
        float dy = abs(y1 - y2);
        sides[0] = sqrt(dx * dx + dy * dy);
        dx = abs(x3 - x2);
        dy = abs(y3 - y2);
        sides[1] = sqrt(dx * dx + dy * dy);
        dx = abs(x3 - x4);
        dy = abs(y3 - y4);
        sides[2] = sqrt(dx * dx + dy * dy);
        dx = abs(x1 - x4);
        dy = abs(y1 - y4);
        sides[3] = sqrt(dx * dx + dy * dy);

        p = sides[0] + sides[1] + sides[2] + sides[3];
        s = sqrt((p / 2 - sides[0]) * (p / 2 - sides[1]) * (p / 2 - sides[2]) * (p / 2 - sides[3]));

        dx = abs(x1 - x3);
        dy = abs(y1 - y3);
        d1 = sqrt(dx * dx + dy * dy);
        dx = abs(x2 - x4);
        dy = abs(y2 - y4);
        d2 = sqrt(dx * dx + dy * dy);
    }

    void show() {
        cout << "Точки четырехугольника: " << endl;
        cout << x1 << " " << y1 << endl;
        cout << x2 << " " << y2 << endl;
        cout << x3 << " " << y3 << endl;
        cout << x4 << " " << y4 << endl;

        cout << "Длины сторон: ";
        cout << sides[0] << ", " << sides[1] << ", " << sides[2] << ", " << sides[3] << endl;

        cout << "Площадь: " << s << "\t" << "периметр: " << p << endl;
        cout << "Диагонали: " << d1 << ", " << d2 << endl;
    }
    bool is_prug() {
        for (int i = 0; i < 4; i++) {
            float temp = sides[i] * sides[(i + 1) % 4];
            if (temp == s) { return true; }
        }
        return false;
    }
    bool is_romb() {
        return (sides[0] == sides[1]) && (sides[1] == sides[2]) && (sides[2] == sides[3]);
    }
    bool is_square() {
        return (is_romb() && is_prug());
    }
    bool is_in_circle() {
        return (d1 * d2 == sides[0] * sides[2] + sides[1] * sides[3]);
    }
    bool is_out_circle() {
        return is_prug() or (sides[0] + sides[2] == sides[1] + sides[3]);
    }
};

void main1()
{
    setlocale(LC_ALL, "Russian");
    Triangle arr[3];
    for (int i = 0; i < 3; i++) {
        double a, b, c;
        cout << "Введите 3 стороны " << i + 1 << "-го треугольника:" << endl;
        cin >> a >> b >> c;
        arr[i].set(a, b, c);
        if (!arr[i].exst_tr()) {
            arr[i].set(0, 0, 0);
        }
    }

    for (int i = 0; i < 3; i++) {
        arr[i].show();
        cout << "Периметр: " << arr[i].perimetr() << endl << "Площадь" << arr[i].square() << endl;
    }
}

void main2() {
    setlocale(LC_ALL, "Russian");
    Circle arr[3];
    for (int i = 0; i < 2; i++) {
        cout << "Введите радиус и координаты центра окружности:" << endl;
        float r, x, y;
        cin >> r >> x >> y;
        arr[i] = Circle(r, x, y);
    }
    cout << "Введите радиус и координаты центра окружности:" << endl;
    float r, x, y;
    cin >> r >> x >> y;
    arr[2].set_circle(r, x, y);

    cout << "Площадь первой окружностью: " << arr[0].square() << endl;
    cout << "Вторую окружность можно вписать в треугольник со сторонами 3, 4, 5: " << arr[1].triangle_around(3, 4, 5) << endl;
    cout << "В третью окружность можно вписать треугольник со сторонами 3, 4, 5: " << arr[2].triangle_in(3, 4, 5) << endl;
    cout << "Первая и вторая окружности пересекаются: " << arr[0].check_circle(arr[1].getRadius(), arr[1].getX_centre(), arr[1].getY_centre()) << endl;
}

void main() {
    setlocale(LC_ALL, "Russian");
    Figure arr[3];
    for (int i = 0; i < 3; i++) {
        float x1, y1, x2, y2, x3, y3, x4, y4;
        cout << "Четырехугольник номер " << i + 1 << ":\n";

        cout << "Введите координаты первой точки(x, y): " << endl;
        cin >> x1 >> y1;
        cout << "Введите координаты первой точки(x, y): " << endl;
        cin >> x2 >> y2;
        cout << "Введите координаты первой точки(x, y): " << endl;
        cin >> x3 >> y3;
        cout << "Введите координаты первой точки(x, y): " << endl;
        cin >> x4 >> y4;

        arr[i] = Figure(x1, x2, x3, x4, y1, y2, y3, y4);
        cout << endl;
    }

    cout << endl << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Четырехугольник номер " << i + 1 << ":\n";
        arr[i].show();
        cout << "Прямоугольник: " << arr[i].is_prug() << endl;
        cout << "Ромб: " << arr[i].is_romb() << endl;
        cout << "Квадрат: " << arr[i].is_square() << endl;
        cout << "Описанная окружность: " << arr[i].is_in_circle() << endl;
        cout << "Вписанная окружность: " << arr[i].is_square() << endl;

        cout << endl;
    }

}