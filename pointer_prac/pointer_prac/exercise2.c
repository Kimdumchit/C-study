
#include <stdio.h>

int main(void)
{
	char arr1[90] = { 0 };
	char arr2[90] = { 0 };
	char *p;
	int i,count=0;
	
	printf("ù ��° ���ڿ��� �Է��ϼ��� : ");
	gets(arr1);

	printf("�� ��° ���ڿ��� �Է��ϼ��� : ");
	gets(arr2);

	p = arr2;

	for (i = 0; i < 90; i++, p++)
	{
		if (arr1[i] == *p)
			count = 1;
		else if (arr1[i] + 32 == *p)
			count = 1;
		else if (arr1[i] - 32 == *p)
			count = 1;
		else if (arr1[i] != *p)
			count = 0;
		else
			count = 0;
	}
	if (count == 1)
	{
		puts(arr1);
		printf("��(��)");
		puts(arr2);
		printf("��(��) �����ϴ�.");
	}
	else
	{
		puts(arr1);
		printf("��(��)");
		puts(arr2);
		printf("��(��) �ٸ��ϴ�.");
	}
	return 0;
}