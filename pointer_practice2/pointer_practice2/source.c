#include <stdio.h>

/*int main(void)
{
	char *pc;
	int *pi;
	double *pd;

	printf("pc의 크기 : %d\n", sizeof(pc));
	printf("pi의 크기 : %d\n", sizeof(pi));
	printf("pd의 크기 : %d\n", sizeof(pd));

	printf("char*의 크기 : %d\n", sizeof(char*));
	printf("int*의 크기 : %d\n", sizeof(int*));
	printf("short의 크기 : %d\n", sizeof(short*));
	printf("float*의 크기 : %d\n", sizeof(float*));

	return 0;
}*/

/*int main(void)
{
	//주소 구하기 연산자 : &x 와, 간접 참조 연산자 : *p를 사용함.
	int x;
	int *p;

	p = &x;
	*p = 10;

	printf("*p = %d\n", *p);
	printf("x = %d\n", x);

	printf("p = %p\n", p);
	printf("&x = %p\n", &x);

	printf("&p = %p\n", &p);

	return 0;
}*/
// 포인터변수 p가 다른 변수를 사용하지 않을 떄 : int *p = NULL;
/*int main(void)
{
	char ch;
	char *pc = &ch;

	int n;
	int *pi = &n;

	double d;
	double *pd = &d;

	int arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("pc + %d = %p\n", i, pc + i);
	}

	for (i = 0; i < 3; i++)
	{
		printf("pi + %d = %p\n", i, pi + i);
	}

	for (i = 0; i < 3; i++)
	{
		printf("pd + %d = %p\n", i, pd + i);
	}

	for (i = 0; i < 5; i++)
	{
		printf("&arr[%d] - &arr[0] = %d\n", i, &arr[i]-&arr[0]);
	}

	return 0;
}*/
/*int main(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int *p = arr; //포인터는 시작 주소부터 시작하므로 arr배열의 시작주소인 arr[0] ( arr이라고만 해도 됨)
	int i;

	for (i = 0; i < 5; i++, p++)
	{
		printf("*p는 %d 입니다. \n", *p);
	}
	
	return 0;
}*/
/*int main(void)
{
	int arr[5] = { 10,20,30,40,50 };
	int *p = arr;
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("&arr[%d] =%p ", i, arr[i]);
		printf("&arr+%d =%p \n", i, (p + i));
	}

	for (i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d ", i, arr[i]);
		printf("*(arr+i) = %d\n", i, *(p + i));
	}
	return 0;
}*/
/*#include <string.h>
int main(void)
{
	char *p = "abcde";

	printf("p = %s\n", p);
	printf("p = %p\n", p);
	printf("p = %p\n", "abcde");

	p = "hello";
	printf("p = %s\n", p);
	printf("p = %p\n", p);
	printf("p = %p\n", "hello");

	return 0;
	
}*/
