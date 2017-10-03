#include <iostream>
#include <sstream>

int main() {

	bool failure = false;
	int max, max_sum, numbers[10], numbers2[10];

	for (std::string string; std::getline(std::cin, string); ) {
		std::istringstream stream(string);
		for (int i = 0; i < 10; ++i) {
			if (!(stream >> numbers[i])) {
				failure = true;
				break;
			}
		}
		break;
	}

	if (failure) 
	{
		std::cout << "An error has occured while reading numbers from line" << std::endl;
		return 0;
	}

	for (std::string string2; std::getline(std::cin, string2); ) {
		std::istringstream stream(string2);
		for (int i = 0; i < 10; ++i) {
			if (!(stream >> numbers2[i])) {
				failure = true;
				break;
			}
		}
		break;
	}

	if (!failure) {
		max = numbers[0];
		max_sum = max + numbers2[0];

		for (int i = 1; i < 10; ++i) {
			if (max < numbers[i]) max = numbers[i];
			if (max_sum < (max + numbers2[i])) max_sum = max + numbers2[i];
			}
		std::cout << max_sum;
		}
	else 
	{
		std::cout << "An error has occured while reading numbers from line" << std::endl;
	}
	return 0;
}
