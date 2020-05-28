
#include <iostream>
#include<math.h>



class Point
{
private:

	double x;
	double y;

public:


	void Set_x(double x)
	{
		this->x = x;
	}
	void Set_y(double y)
	{
		this->y = y;
	}
	double Get_x() const
	{
		return x;
	}
	double Get_y() const
	{
		return y;
	}
	void Print() const
	{
		std::cout << "(X = " << x << ", "  << "Y = " << y << ")" << std::endl;
	}
	double distance(Point other)
	{
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
		return distance;
	}

};
double Distance(Point A, Point B) { 

	return sqrt(pow((B.Get_x() - A.Get_x()), 2) + pow((B.Get_y() - A.Get_y()), 2)); 
	/*
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	double distance = sqrt(x_distance*x_distance + y_distance * y_distance);
	return distance;
	*/
}


void main()
{

	Point A;
	
	A.Set_x(5);
	A.Set_y(6);
	A.Print();


	Point B;
	B.Set_x(3);
	B.Set_y(1);
	B.Print();

	std::cout <<A.distance(B) << std::endl;
	std::cout <<B.distance(A) << std::endl;
	std::cout << Distance(A, B) << std::endl;

}
