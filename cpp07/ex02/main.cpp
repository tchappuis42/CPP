#include "Array.hpp"

int main()
{
	try{
		Array<int> test;
		Array<int> test2(10);
		Array<int> test3(test2);
		Array<std::string> test4(5);

		test3[2] = 12;
		test4[3] = "hajar";
		test2 = test3;
		std::cout << "test4[3] = " << test4[3] << std::endl;
		std::cout << "test2[2] = " << test2[2] << std::endl;
		std::cout << "test2 = \n" << test2 << std::endl;
		std::cout << "test2 = \n" << test3 << std::endl;
		std::cout << "test2.size = " << test2.size() << std::endl;
		test2[11] = 11;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
