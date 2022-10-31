#include <iostream>


int main() {
	char letra;
	std::cout << "Introduzca una letra mayuscula: "; std::cin >> letra;
	std::cout << char(int(letra) + 32) << std::endl;


	return 0;
}
