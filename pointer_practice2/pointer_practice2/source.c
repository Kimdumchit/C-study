#include <stdio.h>

/*int main(void)
{
	char *pc;
	int *pi;
	double *pd;

	printf("pc�� ũ�� : %d\n", sizeof(pc));
	printf("pi�� ũ�� : %d\n", sizeof(pi));
	printf("pd�� ũ�� : %d\n", sizeof(pd));

	printf("char*�� ũ�� : %d\n", sizeof(char*));
	printf("int*�� ũ�� : %d\n", sizeof(int*));
	printf("short�� ũ�� : %d\n", sizeof(short*));
	printf("float*�� ũ�� : %d\n", sizeof(float*));

	return 0;
}*/

/*int main(void)
{
	//�ּ� ���ϱ� ������ : &x ��, ���� ���� ������ : *p�� �����.
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
// �����ͺ��� p�� �ٸ� ������ ������� ���� �� : int *p = NULL;
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
	int *p = arr; //�����ʹ� ���� �ּҺ��� �����ϹǷ� arr�迭�� �����ּ��� arr[0] ( arr�̶�� �ص� ��)
	int i;

	for (i = 0; i < 5; i++, p++)
	{
		printf("*p�� %d �Դϴ�. \n", *p);
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
