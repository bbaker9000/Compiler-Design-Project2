// Complier_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cassert>
#include "Token.h"
#include "Lexer.h"
#include <string>

int main(int argc, char *argv[])
{
	try {
		std::string test = "";
		//putting the command argts in a string
		for (int i = 1; i < argc; ++i)
			test += std::string(argv[i]);
		Lexer* lex = new Lexer(test.begin(), test.end());
		while (!lex->eof())	{
			lex->print(lex->next());
		}	

	}
	catch(char* err){
		std::cout << err;
	}

    return 0;
}

