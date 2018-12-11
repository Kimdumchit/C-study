#include <stdio.h>
#include <string.h>

int main(void)
{
	float arr[10] = { 0 };
	float *p;
	int i;
	float sum = 0, avg = 0;
	
	printf("실수를 입력하세요 : ");
	
	for (i = 0; i < 10; i++)
	{
		scanf("%f", &arr[i]);
	}

	p = arr;

	for (i = 0; i < 10; i++,p++)
	{
		sum += *p;
	}
	avg = sum / 10;

	printf("합은 %f\n평균은 %f\n",sum,avg);

	return 0;
}