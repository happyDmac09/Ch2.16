// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>


int main()
{
	int number1{ 0 };
	int number2{ 0 };
	int sum{ 0 }, product{ 0 }, difference{ 0 }, quotient{ 0 };

	std::cout << "Enter first integer: ";
	std::cin >> number1;

	std::cout << "Enter second integer: ";
	std::cin >> number2;

	sum = number1 + number2;
	product = number1 * number2;
	difference = number1 - number2;
	quotient = number1 / number2;

	std::cout << "Sum  is " << sum << std::endl;
	std::cout << "product  is " << product << std::endl;
	std::cout << "difference  is " << difference << std::endl;
	std::cout << "quotient  is " << quotient << std::endl;
}

