#include <stdio.h>

void TestStatic(void);

int main(void)
{
	int i;

	for (i = 0; i < 5; i++)
		TestStatic();

	return 0;
}

void TestStatic(void)
{
	int num = 0;
	static int count = 0;

	printf("num = %d,", ++num);
	printf("count = %d\n", ++count);
}
