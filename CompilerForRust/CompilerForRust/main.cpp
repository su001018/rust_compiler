#include"Parser.h"
#include <iostream>
using namespace std;

int main() {
	string file = "loopTest.txt";
	Parser parser(file);
	parser.parse();

	//����IR
	parser.ast->tree->Init();
	parser.ast->tree->codegen();
	parser.ast->tree->print();

	//����JIT
	parser.ast->tree->initEE();
	parser.ast->tree->runEE();
	return 0;
}