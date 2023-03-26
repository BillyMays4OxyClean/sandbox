#include <iostream>
#include "exec_cmd.h"

int main(int argc, char * argv[])
{
	std::cout << exec_cmd("pwd");
	std::cout << exec_cmd("cd " << argv[1] << "src && pwd");
}
