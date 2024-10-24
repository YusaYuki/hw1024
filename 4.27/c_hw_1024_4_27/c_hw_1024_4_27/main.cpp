#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i;
int j;
int k;

int main() {
	printf("side1\tside2\thypotenuse\n");
	for (i = 1; i <= 500; i++)
	{
		for (j = 1; j <= 500; j++) 
		{
			for (k = 1; k <= 500; k++) 
			{
				if (pow(k, 2) == pow(i, 2) + pow(j, 2)) 
				{
					printf("%d\t%d\t%d\n", i, j, k);
				}
			}
		}
	}
	system("pause");
	return 0;
}