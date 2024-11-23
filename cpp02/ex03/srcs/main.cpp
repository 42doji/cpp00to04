#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"
#include <iostream>


int main(void)
{
	//bsp
	Point a(0, 0);
	Point b(0, 4);
	Point c(4, 0);

	Point p1(1, 1);
	Point p2(2, 2);
	Point p3(3, 3);
	Point p4(4, 4);
	Point p5(5, 5);
	Point p6(6, 6);
	Point p7(7, 7);

	std::cout << bsp(a, b, c, p1) << std::endl;
	std::cout << bsp(a, b, c, p2) << std::endl;
	std::cout << bsp(a, b, c, p3) << std::endl;
	std::cout << bsp(a, b, c, p4) << std::endl;
	std::cout << bsp(a, b, c, p5) << std::endl;
	std::cout << bsp(a, b, c, p6) << std::endl;
	std::cout << bsp(a, b, c, p7) << std::endl;

}