#include <stdio.h>
#include <stdlib.h>

int num_x;
int num_y;

int main(void)
{
	printf("Enter num of breadth: ");
	scanf_s("%d", &num_x);
	printf("Enter num of lenth: ");
	scanf_s("%d", &num_y);

	for (int i = 0; i < num_y; i++)
	{
		if (i == 0 || i == (num_y - 1))
		{
			for (int j = 0; j < num_x; j++)
			{
				printf("+");
			}
			printf("\n");
		}
		
		if (i != 0  && i != (num_y - 1))
		{
			printf("+");
			for (int j = 0; j < (num_x - 2); j++)
			{
				printf(" ");
			}
			printf("+");
			printf("\n");
		}

	}
	system("Pause");
	return 0;
}