#include <iostream>

int main()
{
	int k, n, cars = 0;

	std::cin >> k >> n;
	int a;
	for (int i = 0; i < n; i++) {
		std::cin >> a;
		cars += a;
		cars -= k;
		if (cars < 0) {
			cars  = 0;
		}
	}

	std::cout << cars << std::endl;
	
	return 0;
}