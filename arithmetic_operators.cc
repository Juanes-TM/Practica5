#include <iostream>

int main() {
	int number1; 
	int number2;
	
	std::cout << "Ingrese un número: "; std::cin >> number1;
	std::cout << "Ingrese otro: "; std::cin >> number2;


	std::cout << number1 << " + " << number2 << " = " << number1 + number2 << std::endl;
	std::cout << number1 << " - " << number2 << " = " << number1 - number2 << std::endl;
	std::cout << number1 << " * " << number2 << " = " << number1 * number2 << std::endl;
	std::cout << number1 << " / " << number2 << " = " << number1 / number2 << std::endl;
	std::cout << number1 << " % " << number2 << " = " << number1 % number2 << std::endl;

	return 0;
}
