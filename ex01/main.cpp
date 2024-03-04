
#include "iter.h"

int main(void)
{
	std::cout << GREEN << "int ARRAY" << RESET << std::endl;
	{
		int array[5] = {0,200,0,10,0};
		iter<int, void(*)(int &)>(array, 5, fun);
		for (int i = 0; i < 5; i++) {
			std::cout << "element " << i << " : " << array[i] << std::endl;
		}
	}
	std::cout << GREEN << "CHAR ARRAY" << RESET << std::endl;
	{
		char array[5] = {'a','b','c','d', 'e'};
		iter<char, void(*)(char &)>(array, 5, fun);
		for (int i = 0; i < 5; i++) {
			std::cout << "element " << i << " : " << array[i] << std::endl;
		}
	}
	std::cout << GREEN << "FLOAT ARRAY" << RESET << std::endl;
	{
		float array[5] = {10.5f,11.5f,100.5f,1.05f, 0.0005f};
		iter<float, void(*)(float &)>(array, 5, fun);
		for (int i = 0; i < 5; i++) {
			std::cout << "element " << i << " : " << array[i] << std::endl;
		}
	}
	return 0;
}