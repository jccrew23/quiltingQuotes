#include <iostream>
#include <string>
#include "Quilt.h"
#include "QuiltQuote.h"

int main() {
	std::cout << "Hello, World!" << std::endl;

	std::cout << "Welcome to the Quilting Quote System!" << std::endl;
	std::cout << "Please enter the following information to receive a quote." << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;

	std::string name;
	float width, length;
	int quiltingType, battingType;
	int shippingType, bindingOption;

	std::cout << "What is your name?" << std::endl;
	std::cin >> name;

	std::cout << "What is the width of the quilt in inches?" << std::endl;
	std::cin >> width;

	std::cout << "What is the length of the quilt in inches?" << std::endl;
	std::cin >> length;

	std::cout << "What type of quilting would you like? (1 - MACHINE Design or 2 - CUSTOM Design)" << std::endl;
	std::cin >> quiltingType;

	std::cout << "What type of batting would you like? (POLYESTER, COTTON, COTTON_POLY, WOOL, BAMBOO)" << std::endl;
	std::cin >> battingType;

	std::cout << "Would you like shipping? (1 - YES or 2 - NO)" << std::endl;
	std::cin >> shippingType;

	std::cout << "Would you like binding? (1 - YES or 2 - NO)" << std::endl;
	std::cin >> bindingOption;

	Quilt quilt(width, length, quiltingType, battingType);
	QuiltQuote quote(shippingType, quilt, name, bindingOption);

	quote.displayQuote();

	return 0;
}