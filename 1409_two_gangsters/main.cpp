#include <iostream>

int main()
{
	int h, l, maxCans = 10;
	std::cin >> h >> l;
	int nCans = h + l - 1;

	if (nCans > maxCans) {
		std::cout << "Too many cans" << std::endl;
		return 0;
	}

	if (h < 1 || l < 1) {
		std::cout << "Bandit can not shoot less than 1 can" << std::endl;
		return 0;
	}

	std::cout << nCans - h << " " << nCans - l << std::endl;
	return 0;
}