#include <iostream>

int main()
{
	int num{ 1 };

	for (num;  num <= 100; num++) {
		//if (num % 3 == 0 && num % 5 == 0) {
		if (num % 15 == 0) {
			std::cout << "Fizz Buzz" << std::endl;
		}
		else {
			if (num % 3 == 0) {
				std::cout << "Fizz" << std::endl;
			}
			else {
				if (num % 5 == 0) {
					std::cout << "Buzz" << std::endl;
				}
				else {
					std::cout << num << std::endl;
				}
			}
		}
	}
}