#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr1[99] = { 0 };
	char arr2[99] = { 0 };
	char *p;
	int i, len;

	printf("문자열을 입력하세요 : ");
	gets(arr1);
	p = arr1;
	len = strlen(arr1);
	for (i = len-1; i >=0 ; i--, p++)
	{
		arr2[i] = *p;
	}

	puts(arr2);
	return 0;

}