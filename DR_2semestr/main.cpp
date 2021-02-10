#include <iostream>
#include <string>

int main() {
	
	//for 1 ex//
	std::string a, b;
	std::cout << "Please, newlyweds, enter your names\n";
	std::cin >> a >> b;

	int i = 0;
	std::cout << "If you are ready to get married, press 1. If you are not ready, press 0\n";
	std::cin >> i;
	if (i == 1)
		std::cout << a << " and " << b << " you are married now\n";
	else
		std::cout << "Come back later\n";

	return 0;
}