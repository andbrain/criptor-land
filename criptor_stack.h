#ifndef CRIPTOR_STACK_H

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class criptor_stack
{
public:
	criptor_stack(int qtd);
	~criptor_stack();
	string process(string sentence);

private:
	vector< stack<string>* > mVec;
};

#endif