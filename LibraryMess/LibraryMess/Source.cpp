#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

void clearbuffer(char* arr, int count);

int main() 
{
	char input[200];
	char buffer[20];
	int i = 0;
	int countInput = 0;
	while (input[i]!=10)
	{
		input[i] = getchar();
		countInput++;
	}

	int k = 0;
	int result;
	for (int j = 0; j < countInput; j++)
	{
		if (input[j] > 48 && input[j] < 58)
		{
			while (isdigit(input[j]))
			{
				buffer[k] = input[j];
				k++;
				j++;
			}
			if (!isdigit(input[j]))
			{
			}
		}
		else
		{
			k = 0;
			j++;
		}



	}
