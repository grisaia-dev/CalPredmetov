#include <iostream>
#include <fstream>

void print_logo();
int run();

int main() {
	print_logo();
	return run();
}

void print_logo() {
    // Просто принтит лого
	std::cout << "                     Develop by                       " << std::endl;
	std::cout << " ######   ##  ##    ####     ####    #####    ######  \n"
				 " ##       ### ##   ##  ##   ##  ##   ##  ##   ##		\n"
				 " ##       ######   ##       ##  ##   ##  ##   ##		\n"
				 " ####     ######   ##       ##  ##   #####    ####	\n"
				 " ##       ## ###   ##       ##  ##   ####     ##		\n"
				 " ##       ##  ##   ##  ##   ##  ##   ## ##    ##		\n"
				 " ######   ##  ##    ####     ####    ##  ##   ######  " << std::endl;
	std::cout << "            Programm for uchebnogo plana!" << std::endl;
}

int run() {
	int code = 0;
	return code;
}
