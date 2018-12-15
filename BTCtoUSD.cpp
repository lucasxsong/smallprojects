#include <iostream>

int main() {
	double userInput = 1;
	while (userInput != 0) {
 
	std::cout << "bitcoin: " << std::endl;

	std::cin >> userInput;

	std::cout << "USD: " << userInput * 3500 << std::endl;
	std::cout << "#: " << std::endl;
	double pills;
	std::cin >> pills;
	std::cout << userInput * 3500 / pills << std::endl;
	}
	return 0;

}
