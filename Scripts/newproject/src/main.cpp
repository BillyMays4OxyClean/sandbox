#include <iostream>
#include <fstream>
using namespace std;

int main(int argc,char * argv[])
{
	if (argc == 1)
	{
		ofstream myfile;
		myfile.open("CMakeLists.txt");
		myfile << "cmake_minimum_required(VERSION 3.1)
	}
}
