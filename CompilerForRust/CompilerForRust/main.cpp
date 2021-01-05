#include"Parser.h"
#include <iostream>
using namespace std;

int main() {
	string file = "loopTest.txt";
	Parser parser(file);
	parser.parse();

	//生成IR
	parser.ast->tree->Init();
	parser.ast->tree->codegen();
	parser.ast->tree->print();

	//调用JIT
	parser.ast->tree->initEE();
	parser.ast->tree->runEE();
	return 0;
}