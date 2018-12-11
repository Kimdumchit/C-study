#include <stdio.h>
#include <string.h>
/*int main(void)
{
	char *pc;
	int *pi;
	double *pd;

	printf("*pc의 크기 : %d\n", sizeof(pc));
	printf("*pd의 크기 : %d\n", sizeof(pi));
	printf("*pd의 크기 : %d\n", sizeof(pd));

	printf("char*의 크기 : %d\n", sizeof(char*));
	printf("short*의 크기 : %d\n", sizeof(short*));
	printf("int*의 크기 : %d\n", sizeof(int*));
	printf("float*의 크기 : %d\n", sizeof(float*));
	printf("double*의 크기 : %d\n", sizeof(double*));

	return 0;

}*/
/*int main(void)
{
	int x;
	int *p;

	p = &x;
	*p = 10;

	printf("*p = %d\n", *p); // 10이 나올것으로 예상됨.
	printf("x = %d\n", x); // 10이 나올것으로 예상됨.

	printf("p = %p\n", p); //x의 주소값이 나올 것으로 예상됨.
	printf("&x = %p\n", &x); // 위와 동일..

	printf("&p = %p\n", &p);

	return 0;
}*/
/*int main(void)
{
	char ch;
	char *pc = &ch;

	int x;
	int *y = &x;

	double dou;

	double *pd = &dou;

	int arr[3];
	int i;

	for (i = 0; i < 3; i++)
		printf("*pc + %d = %p\n", i, pc + i);
	for (i = 0; i < 3; i++)
		printf("*y + %d = %p\n", i, y + 1);
	for (i = 0; i < 3; i++)
		printf("*pd + %d = %p\n", i, pd + i);

	return 0;
}*/
/*int main(void)
{
	int arr[5] = { 10,20,30,40,50 };
	int *p = &arr[0]; //포인터의 주소는 배열의 시작점과 같아요.
	int i;

	for (i = 0; i < 5; i++, p++)
		printf("*p + %d = %d\n", i, *p);

	return 0;
}*/
/*int main(void)
{
	int arr[5] = { 10,20,30,40,50 };
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
		printf("arr + %d = %p\n", i, arr + i);
	}

	for (i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
		printf("*(arr+%d) = %d\n", i, *(arr + i));
	}
	
	return 0;
}*/
int main(void)
{
	char arr1[99] = { 0 };
	char arr2[99] = { 0 };
	char *p;
	int i;
	
	printf("문자열을 입력하세요 : ");
	gets(arr1);
	p = arr1;
	
	for (i = 0; i < 99; i++,p++)
	{
		arr2[i] = *p;
	}
	
	puts(arr2);
	return 0;
	
}