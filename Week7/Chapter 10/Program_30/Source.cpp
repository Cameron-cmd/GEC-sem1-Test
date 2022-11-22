#include <iostream>;

int main()
{
	int num1 = 5;
	for (int i = 0; i < num1; i++)
	{
		std::cout << "i=" << i << std::endl;
	}

	int num2 = 15;
	for (int i = 0; i < num2; i++)
	{
		std::cout << "i=" << i << std::endl;
	}

	/*Pause the output*/
	std::cin.get();
	return 0;
}