#include <stdio.h>

/*int main(void)
{
	int x;
	int *p;

	p = &x;  //x�� �ּҸ� p��� ������ ������
	*p = 10; //���� ���� �����ڸ� ���� p�� �ּ��� ���� �ҷ��� ��ȯ��

	printf("*p = %d\n", *p); //������ p�� ���� �������� ������ 10�� ����.
	printf("x = %d\n", x); // *p�� 10�̹Ƿ� x�� 10�̴�
	
	printf("p = %p\n", p); //p���� &x�� ���� �ּҰ� ��µȴ�
	printf("&x = %p\n", &x); // &x�� �ּҰ��̴�.

	printf("&p = %p\n", &p); // ������ ������ �޸𸮿� �Ҵ�ȴ�.

	return 0;
}
*/
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
		printf("pc + %d = %p\n", i, pc + i);

	for (i = 0; i < 3; i++)
		printf("pi + %d = %p\n", i, pi + i);

	for (i = 0; i < 3; i++)
		printf("pd + %d = %p\n", i, pd + i);


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
		printf("*(arr[%d] = %d\n", i, *(arr+i));
	}

	return 0;
}*/
int main(void)
{
	int arr[5] = { 10,20,30,40,50 };
	int *p = arr;
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("arr+%d = %p\n", i, arr + i);
		printf("p+%d = %p\n", i, p + i);
	}
	for (i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
		printf("p[%d] = %d\n", i, p[i]);
	}
	
	return 0;
}