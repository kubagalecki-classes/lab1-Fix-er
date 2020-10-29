class Wektor2D
{
public:
    Wektor2D()
    {
        vecX = 0.0;
        vecY = 0.0;
    }
    Wektor2D(double x, double y)
    {
        vecX = x;
        vecY = y;
    }

    void   setX(double a) { vecX = a; }
    double getX() { return vecX; }
    void   setY(double b) { vecY = b; }
    double getY() { return vecY; }
    void   printVec() { std::cout << vecX << " " << vecY << '\n'; }

private:
    double vecX;
    double vecY;
};
Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
    return Wektor2D(v1.getX() + v2.getX(), v1.getY() + v2.getY());
}
double operator*(Wektor2D v1, Wektor2D v2)
{

    return (v1.getX() * v2.getX() + v1.getY() * v2.getY());
}
