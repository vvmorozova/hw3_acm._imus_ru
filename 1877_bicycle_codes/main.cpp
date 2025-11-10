#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
	std::string first_lock, second_lock;
	std::cin >> first_lock >> second_lock;

	if ((std::stoi(first_lock) % 2 == 0 && std::stoi(first_lock) != 1)
	||  (std::stoi(second_lock) % 2 != 0 && std::stoi(second_lock) != 0)) {
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	return 0;
}