#include <stdio.h>
#define MAX 5

int main(void)
{
	int arr[MAX] = { 0 };
	int i;
	int sum=0;
	double average = 0;

	printf("%d���� ������ �Է��ϼ��� : ", MAX);
	
	for (i = 0; i < MAX; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < MAX; i++)
	{
		sum += arr[i];
	}
	average = sum / MAX;

	printf("sum = %d\n average = %f\n", sum, average);

	return 0;
}