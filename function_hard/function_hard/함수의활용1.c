#include <stdio.h>

/*void Printhello(void)
{
	printf("���α׷��� �����մϴ�.\n");
}

void PrintBye(void)
{
	printf("���α׷��� �����մϴ�.\n");
}

int main(void)
{
	Printhello();
	PrintBye();

	return 0;
}*/
/*void PrintSumAndAverage(int a, int b)
{
	printf("�հ� : %d\n", a + b);
	printf("��� : %f\n", (double)(a + b) / 2);
}

int main(void)
{
	int x;
	int y;

	PrintSumAndAverage(10, 20);

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d,%d", &x, &y);
	PrintSumAndAverage(x, y);

	return 0;
}*/
/*int GetFactorial(int num)
{
	int i;
	int fact = 1;
	for (i = 1; i < num; i++)
	{
		fact *= i;
	}
	return fact;
}

int Getsum(int num)
{
	int i;
	int sum = 0;
	for (i = 0; i < num; i++)
	{
		sum += i;
	}
	
	return sum;
}

int main(void)
{
	int result1, result2;

	result1 = GetFactorial(10);
	printf("10 ���丮�� : %d\n", result1);

	result2 = Getsum(10);
	printf("1~10������ �հ� : %d\n", result2);

	return 0;
}*/
/*void Swap(int x, int y);

int main(void)
{
	int a = 10;
	int b = 20;

	printf("swap ���� a = %d, b = %d\n", a, b);

	Swap(a, b);

	printf("swap ���� a = %d, b = %d\n", a, b);

	return 0;
}

void Swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}*/
/*
void Swap(int *x, int *y);

int main(void)
{
	int a = 10;
	int b = 20;

	printf("swap ���� a = %d , b = %d\n", a, b);

	Swap(&a, &b);

	printf("swap ���� a = %d , b = %d\n", a, b);

	return 0;
}

void Swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}*/
/*void GetSumProduct(int x, int y, int *sum, int *product);

int main(void)
{
	int a = 5, b = 8;
	int res1, res2;

	GetSumProduct(a, b, &res1, &res2);

	printf("%d + %d = %d\n", a, b, res1);
	printf("%d + %d = %d\n", a, b, res2);

	return 0;
}

void GetSumProduct(int x, int y, int *sum, int *product)
{
	*sum = x + y;
	*product = x * y;
}*/
void PrintArray(int *arr, int size);
int GetSumOfArray(int *arr, int size);

int main(void)
{
	int x[5] = { 10,20,30,40,50 };
	int y[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("x �迭 : ");
	PrintArray(x, 5);
	printf("�հ� : %d\n", GetSumOfArray(x, 5));

	printf("y �迭 : ");
	PrintArray(y, 10);
	printf("�հ� : %d\n", GetSumOfArray(y, 10));

	printf("y �迭�� �Ϻκ� :");
	PrintArray(y + 2, 5);
	printf("�հ� : %d\n", GetSumOfArray(y + 2, 5));

	return 0;
}

void PrintArray(int *arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

int GetSumOfArray(int *arr, int size)
{
	int i;
	int total;

	for (i = 0, total = 0; i < size; i++)
	{
		total += arr[i];
	}
	return total;
}






