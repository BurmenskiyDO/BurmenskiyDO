#include<stdio.h>
#include"Header.h"

int main(int argc, char* argv1, char* argv2, char argv3) 
{
	if (!argc) 
	{
		char* fop[256];char* sop[256];
		char op;
		printf_s("Inert the problem:\n");
		scanf_s("%s %c %s", fop, op, sop);


		switch (op) {

		case '+':
			summ(*fop, *sop);
			break;	
		case '-':
			diff(*fop, *sop);
			break;
		case '*':
			mult(*fop, *sop);
			break;
		case '/':
			div(*fop, *sop);
			break;


	}
}