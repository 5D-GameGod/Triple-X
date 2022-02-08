#include <iostream>

int main()
{
	std::cout << "You are playing a guessing game to win $1,000,000..." << "\n";
	std::cout << "\n" << "Enter the correct guess to proceed : " << "\n";

	int a{ 4 };
	int b{ 3 };
	int c{ 2 };

	int sum{ a + b + c };
	int product{ a * b * c };

	std::cout << "\n" << "The sum of its digits is " << sum << "\n";
	std::cout << "\n" << "The product of its digits is " << product << std::endl;

	return 0;
}