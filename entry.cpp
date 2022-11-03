#include <iostream>

int main()
{
	std::string sequence{ "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	std::string password{};

	std::size_t length = sequence.size();

	for (int i = 0; i < 16; i++) // replace 16 with the amount of characters you'd like to generate.
		password += sequence[rand() % length];

	std::cout << "Your password is: " << password << '\n';
	std::cin.get();

	return EXIT_SUCCESS;
}
