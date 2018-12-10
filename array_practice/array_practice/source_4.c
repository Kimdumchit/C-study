#include <stdio.h>

int main(void)
{
	short data[2][3];
	int i, j;

	data[0][0] = 0;
	data[0][1] = 1;
	data[0][2] = 2;
	data[1][0] = 3;
	data[1][1] = 4;
	data[1][2] = 5;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("data[%d][%d]=%d\n", i, j, data[i][j]);
		}
	}
	return 0;
}