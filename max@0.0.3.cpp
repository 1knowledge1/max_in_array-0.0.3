#include <iostream>
#include <sstream>

int main()
{
	bool failure = false;
	int max, max2, numbers[10], numbers2[10];

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

	int pos = 0;
	max2 = numbers2[0];

	for (int j = 1; j < 10; j++) {
		if (numbers2[j] >= max2) {
			max2 = numbers2[j];
			pos = j;
		}
	}

	max = numbers[0];
	for (int j = 1; j <= pos; j++) {
		if (numbers[j]>max) {
			max = numbers[j];
		}
	}
		std::cout << max + max2;
	}
	else {
		std::cout << "An error has occured while reading numbers from line" << std::endl;
	}

	system("pause");
	return 0;
}
