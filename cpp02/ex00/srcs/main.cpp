#include "../includes/Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << b.getRawBits() << std::endl;

	b.setRawBits(42);

	std::cout << b.getRawBits() << std::endl;
	b = c;
	std::cout << b.getRawBits() << std::endl;
	return 0;
}