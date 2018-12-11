
#include <stdio.h>

int main(void)
{
	char arr1[90] = { 0 };
	char arr2[90] = { 0 };
	char *p;
	int i,count=0;
	
	printf("첫 번째 문자열을 입력하세요 : ");
	gets(arr1);

	printf("두 번째 문자열을 입력하세요 : ");
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
		printf("와(과)");
		puts(arr2);
		printf("는(은) 같습니다.");
	}
	else
	{
		puts(arr1);
		printf("와(과)");
		puts(arr2);
		printf("는(은) 다릅니다.");
	}
	return 0;
}