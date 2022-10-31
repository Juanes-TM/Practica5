#include <iostream>

int main(){

	bool A {false};
	bool B {false};

	std::cout << "A " << "B " << "!A " << "!B " << "A && B " << "A || B" <<std::endl;
	std::cout << A << " " << B << "  " << !A << "  " << !B << "    " << A and B;
	std::cout << "     " <<  A or B; 
	std::cout << std::endl;

	A = false;
	B = true;

        std::cout << A << " " << B << "  " << !A << "  " << !B << "    " << B and A;
        std::cout << "     " <<  A or B;
        std::cout << std::endl;

	A = true;
	B = false;

        std::cout << A << " " << B << "  " << !A << "  " << !B << "    " << A and B;
        std::cout << "     " <<  B or A;
        std::cout << std::endl;

	A = true;
	B= true;

        std::cout << A << " " << B << "  " << !A << "  " << !B << "    " << A and B;
        std::cout << "     " <<  A or B;
        std::cout << std::endl;





	return 0;
}
	
