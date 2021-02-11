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
	
	std::cout << "Married or not be happy!\n";

	std::cout << "Here is a new family! It is time to think about children and mortgage\n";

	std::cout << "First of all, we need children. God gave you a bunny-he will give you a lawn\n";
	
	std::cout << "It is time to change your life!\n";

	std::cout << "You have children now! Nothink, but children...\n";

	std::cout << "don't wait for God's help, go to work and enjoy your family life\n";

	std::cout << "You are a mistake of nature! Go to church and don't come back without the kids\n";

	return 0;
}
