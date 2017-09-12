#include <iostream>
#include <cstring>
#include "criptor_stack.h"
using namespace std;

string msg;
void inputData(int argc, char const *argv[]);
int main(int argc, char const *argv[])
{
	inputData(argc,argv);
	criptor_stack cs(3);
	string msg_encript = cs.process(msg);
	cout << msg_encript << endl;

	return 0;
}

void inputData(int argc, char const *argv[])
{
	if(argc == 1)
	{
		cout << "[INFO]: You must complete a sentence to encript/decript." << endl;
		cout << "eg: ./criptor <MESSAGE>" << endl;
		exit(1);
	}

	string str(argv[1]);
	msg = str;

	for (int i = 2; i < argc; ++i)
	{
		string s(argv[i]);
		msg += + " " + s;
	}
}