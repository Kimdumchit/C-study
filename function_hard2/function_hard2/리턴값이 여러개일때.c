#include <stdio.h>

void GetSumProduct(int x, int y, int *sum, int *product);

int main(void)
{
	int a = 5, b = 8; //입력인자
	int res1, res2; //출력인자

	GetSumProduct(a, b, &res1, &res2);

	printf("%d + %d = %d\n", a, b, res1);
	printf("%d + %d = %d\n", a, b, res2);

	return 0;
}

void GetSumProduct(int x, int y, int *sum, int *product)
{
	*sum = x + y;
	*product = x * y;
}