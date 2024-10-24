#include <stdio.h>
#include <stdlib.h>

float principal = 5000;
float rate = 0.1;
int i;
int j;
int k;
int year = 1;

int main() 
{
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			principal += principal * rate;
			printf("The %d year's compound amount:%.2f\n", year, principal);
			year++;
		}
		
		printf("interest rate:%.1f%%\n", rate * 100);
		rate += 0.005;
	}
	system("pause");
	return 0;
}