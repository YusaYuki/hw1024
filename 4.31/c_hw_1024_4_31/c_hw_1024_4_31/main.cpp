#include <stdio.h>
#include <stdlib.h>

char c = '*';
char s = ' ';
int i;
int j;
int k;
int direction = 1;

int main() {
	for (i = 1; i < 6; i += direction)
	{
		if (i < 1)
			break;
		for (k = 0; k < 5 - i; k++)
		{
			printf("%c", s);
		}
		for (j = 0; j < i * 2 - 1; j++) 
		{
			printf("%c", c);
		}
		if (i == 5)
			direction *= -1;
		printf("\n");
	}
	system("pause");
	return 0;
}