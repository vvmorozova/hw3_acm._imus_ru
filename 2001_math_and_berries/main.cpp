#include <iostream>
#include <array>
int main()
{
	std::array<int, 3> a, b;

	for (int i = 0; i < 3; i++) {
		std::cin >> a[i] >> b[i];
	}

	std::cout << a[0] - a[2] << " " << b[0] - b[1] << std::endl;
	return 0;
}