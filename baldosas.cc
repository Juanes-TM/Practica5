#include <iostream>

int main() {
	float largo;
	float ancho;
	std::cout << "Introduzca un largo: "; std::cin >> largo;
	std::cout << "Ahora un ancho: "; std::cin >> ancho;
	
	float b = 0.36;
	double squares = largo * ancho;

	std::cout << "En la habitación habrán " << int(squares / b) << " baldosas enteras" << std::endl;


	return 0;
}
