#include "criptor_stack.h"

criptor_stack::criptor_stack(int qtd)
{
	// cout << "Starting criptor stack.." << endl;
	for (int i = 0; i < qtd; ++i)
	{
		stack<string> *pilha = new stack<string>();
		mVec.push_back(pilha);
	}
}

criptor_stack::~criptor_stack()
{
	for (vector<stack<string>*>::iterator i = mVec.begin(); i != mVec.end(); ++i)
	{
		delete (*i);
	}
	// cout << "Finishing criptor stack.." << endl;
}


string criptor_stack::process(string sentence)
{
	int i = 0, pos;
	int total = mVec.size();
	string letra, result = "";
	stack<string>* pilha;
		
	// push into the stacks	
	while(i < sentence.size()){
		letra = sentence[i];
		pos = (i%total);
		pilha = mVec[pos];
		pilha->push(letra);
		i++;
	}

	// pop from stacks
	i=0;
	while(i < sentence.size()){
		pos = (i%total);
		pilha = mVec[pos];
		result += pilha->top();
		pilha->pop();
		i++;
	}	

	return result;
}