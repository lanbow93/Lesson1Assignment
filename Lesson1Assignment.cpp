#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";

	int firstNum{};
	std::cin >> firstNum;

	std::cout << "Enter another integer: ";
	
	int secondNum{};
	std::cin >> secondNum;

	std::cout << firstNum << " + " << secondNum << " = " << (firstNum + secondNum) << '\n';
	std::cout << firstNum << " - " << secondNum << " = " << (firstNum - secondNum) << '\n';
	return 0;

}