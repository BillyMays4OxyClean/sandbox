#include <iostream>

int main(int argc,char * argv[])
{
	std::cout << argc << std::endl;
	for (int i = 0; i < argc; i++)
		std::cout << i << "\t:\t" << argv[i] << std::endl;
}
