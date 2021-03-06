#include <stdio.h>

void PrintArray(int *arr, int size);
int GetSumOfArray(int *arr, int size);

int main(void)
{
	int x[5] = { 10,20,30,40,50 };
	int y[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("x 배열 : ");
	PrintArray(x, 5);
	printf("합계 : %d\n",GetSumOfArray(x,5));

	printf("y 배열 : ");
	PrintArray(y, 10);
	printf("합계 : %d\n", GetSumOfArray(y, 10));

	printf("y 배열의 일부분 : ");
	PrintArray(y + 2, 5);
	printf("합계 : %d\n", GetSumOfArray(y + 2, 5));

	return 0;
}

void PrintArray(int *arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%d", arr[i]);
}

int GetSumOfArray(int *arr, int size)
{
	int i, total;

	for (i = 0, total = 0; i < size; i++)
	{
		total += arr[i];
	}
	
	return total;
}