class Wektor2D
{
private:
    double x;
    double y;

public:
    Wektor2D(double x0, double y0)
    {
        x = x0;
        y = y0;
        std::cout << "nowy wektor [" << x << ", " << y << "]\n";
    }

    Wektor2D()
    {
        x = 0;
        y = 0;
    }

    ~Wektor2D() { std::cout << "zegnam [" << x << ", " << y << "]\n"; }

    void   setX(double x0) { x = x0; }
    void   setY(double y0) { y = y0; }
    double getX() { return x; }
    double getY() { return y; }

    void print() { std::cout << "x:" << x << "\ty: " << y << "\n"; }
    void norm() { std::cout << "norm: " << sqrt(x * x + y * y) << "\n"; }

    Wektor2D operator+(Wektor2D w2) { return Wektor2D(x + w2.x, y + w2.y); }
    double   operator*(Wektor2D w2) { return x * w2.x + y * w2.y; }
};
