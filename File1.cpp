#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <Echiquier.h>
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[]) 
{
	Echiquier test;
	int idep, jdep, iarr, jarr;
	while(true){
		cout << test.VisualiserEchiquier();
		cin >> idep >> jdep >> iarr >> jarr;
		char piece = test.LireCaseEchiquier(idep, jdep);
		test.ModifierCaseEchiquier(piece, iarr, jarr);
		test.ModifierCaseEchiquier(' ', idep, jdep);
	}
	system("pause");
	return 0;
}
