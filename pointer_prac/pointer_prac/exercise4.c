#include <stdio.h>

int main(void)
{
	int arr[10] = { 15,23,7,78,34,67,45,36,90,71 };
	int arr1[10] = { 0 };
	int i;
	int up;
	int *p = arr;

	printf("[ ���� �迭 ] 15 23  7  78  34  67  45  36  90  71\n");
	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &up);
	for (i = 0; i < 10; i++,p++)
	{
		arr1[i] = (*p + up);
	}
	printf("[ ������ �迭 ]");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}

	return 0;
}