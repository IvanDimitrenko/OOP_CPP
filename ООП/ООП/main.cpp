#include <iostream>

struct Point
{
    double x;
    double y;


};


void main()
{
    Point A;

    std::cout << "A.x" << A.x << "A.y" << A.y;
    
    Point* pA = &A;
    std::cout << pA -> x << '\t' << pA -> y << std::endl;
}