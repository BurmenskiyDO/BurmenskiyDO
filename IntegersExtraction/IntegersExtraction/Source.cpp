#include<stdio.h>
#include<ctype.h>
#include<Windows.h>

int main() {
	char c;
	char string[500] = { 0 };
	char number[200] = { 0 };
	int i = 0;



	do {
		c = getchar();            //input
		string[i] = c;
		i++;
	} while (c != 10);
	printf_s("\n");





	i = 0;
	while (string[i] != '\0')
	{
		int k = 0;
		while (isdigit(string[i]) == 0)            
		{
			i++;
			if (i == strlen(string))             //if no digits were entered
				exit(1);
		}
		while (isdigit(string[i]))
		{
			number[k] = string[i];
			i++;
			k++;
		}
		number[k] = '\0';




		int square = atoi(number);
		printf_s("\n%d^2=%d", square, square * square);
	}
}