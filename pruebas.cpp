#include <iostream>
#include <string>
#include <limits>

int main(int argc,char **argv) {
	char nombre[5],apellido[5];
	std::cin.getline(nombre,4,'a');
	std::cout<< nombre << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	std::cin.clear();
	std::cin.getline(apellido,4);
	return 0;
}
