#include <iostream>

int main()
{
	std::cout << "You are playing a guessing game to win $1,000,000..." << std::endl;
	std::cout << "Enter the correct 3-digit code to proceed : " << std::endl;

	int CodeFirstDigit{ 4 };
	int CodeSecondDigit{ 3 };
	int CodeThirdDigit{ 2 };

	int CodeSum{ CodeFirstDigit + CodeSecondDigit + CodeThirdDigit };
	int CodeProduct{ CodeFirstDigit * CodeSecondDigit * CodeThirdDigit };

	std::cout << "\n" << "*The digits in the code add up to " << CodeSum << ", while their product is " << CodeProduct << "." << std::endl;

	int PlayerGuess{ 0 };

	return 0;
}