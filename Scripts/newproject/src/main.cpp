#include <iostream>
#include <fstream>
#include "exec_cmd.h"

using namespace std;

int main(int argc,char * argv[])
{
	if (argc == 2)
	{
		string newProject(argv[1]);
		exec_cmd("mkdir " + newProject);
		ofstream myfile;
		myfile.open(newProject + "/CMakeLists.txt");
		myfile << "cmake_minimum_required(VERSION 3.1)" << endl;
		myfile << "project(" << newProject << ")" << endl;
		myfile << "add_executable(" << newProject << " src/main.cpp)";
		myfile.close();

		exec_cmd("cd " + newProject + " && mkdir src && cd src && touch main.cpp");
		cout << "Creating src directory" << endl;
		cout << "Creating main.cpp" << endl;

		ofstream srcFile;
		srcFile.open(newProject + "/src/main.cpp");
		cout << "Writing to main.cpp" << endl;
		srcFile << "#include <iostream>" << endl << endl;
		srcFile << "int main(int argc, char * argv[])" << endl;
		srcFile << "{" << endl;
		srcFile << "   std::cout << \"Hi mom.\" << std::endl;" << endl;
		srcFile << "}";
		srcFile.close();

		exec_cmd("cd " + newProject + " && mkdir BUILD");
		cout << "Creating BUILD/ directory" << endl;
		cout << endl << "Running CMake" << endl << endl;
#ifdef _WIN32
		cout << exec_cmd("cd " + newProject + "/BUILD && cmake .. -G \"MinGW Makefiles\"");
#else
		cout << exec_cmd("cd " + newProject + "/BUILD && cmake ..");
#endif
		cout << endl << "New project \"" << newProject << "\" created" << endl;
	}
}
