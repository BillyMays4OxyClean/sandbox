#include <iostream>
#include <string>
using namespace std;

int main(int argc,char * argv[])
{
	cout << argc << endl;
	for (int i = 0; i < argc; i++)
		cout << i << "\t:\t" << argv[i] << endl;

	cout << string(argv[1]).at(0) << endl;
	cout << string(argv[1]).at(1) << endl;
	cout << string(argv[1]).substr(2,3) << endl;
}
