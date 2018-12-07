#include <stdio.h>

/*int main(void)
{
	int x;
	int *p;

	p = &x;  //x의 주소를 p라는 변수에 저장함
	*p = 10; //간접 참조 연산자를 통해 p의 주소의 값을 불러와 변환함

	printf("*p = %d\n", *p); //포인터 p는 값을 가져오기 때문에 10이 나옴.
	printf("x = %d\n", x); // *p가 10이므로 x도 10이다
	
	printf("p = %p\n", p); //p에는 &x의 값인 주소가 출력된다
	printf("&x = %p\n", &x); // &x는 주소값이다.

	printf("&p = %p\n", &p); // 포인터 변수도 메모리에 할당된다.

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