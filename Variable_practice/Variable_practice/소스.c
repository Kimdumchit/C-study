#include <stdio.h>

/*int main(void)
{
	int amount;
	int price = 1000;

	printf("���� : %d, ���� : %d\n", amount, price);
	amount = 100;
	price = 2000;
	printf("���� : %d, ���� : %d\n", amount, price);

	return 0;
}*/
/*#define MAX 100
int main(void)
{
	int num1 = MAX;
	int num2 = MAX - 1;
	int num3 = -MAX;

	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	printf("num3 = %d\n", num3);

	printf("MAX = %d\n", MAX);

	return 0;
}*/
/*int main(void)
{
	const double PI = 3.14;
	const int MAX_COUNT;

	printf("PI = %f\n", PI);
	printf("MAX_COUNT = %d\n", MAX_COUNT);

	PI = 3.1415;
	MAX_COUNT = 100;

	return 0;
}*/
/*int main(void)
{
	char ch;

	scanf("%c", &ch);
	printf("%c ������ ASCII �ڵ� : %d\n", ch, ch);

	return 0;
}*/
/*int main(void)
{
	short num1 = -10; //signed�� ������ �����ϴ�.
	unsigned short num2 = num1;

	printf ("num1 = %d\n num2 = %d", num1, num2);
	return 0;
}*/
/*int main(void)
{
	short num1 = 32767;
	short num2 = -32768;

	unsigned short num3 = 65535;
	unsigned short num4 = 0;

	num1 += 1;
	num2 -= 2;
	num3 += 1;
	num4 -= 1;

	printf("num1 = %d\n",num1);
	printf("num2 = %d\n", num2);
	printf("num3 = %d\n", num3);
	printf("num4 = %d\n", num4);

	return 0;
}*/
/*int main(void)
{
	char ch;
	int num;
	double fnum;

	printf("ch�� ����Ʈ ũ�� : %d\n", sizeof(ch));
	printf("num�� ����Ʈ ũ�� : %d\n", sizeof(num));
	printf("fnum�� ����Ʈ ũ�� : %d\n", sizeof(fnum));

	printf("3.14f�� ����Ʈ ũ�� : %d\n", sizeof(3.14f));

	printf("char���� ����Ʈ ũ�� : %d\n", sizeof(char));
	printf("short���� ����Ʈ ũ�� : %d\n", sizeof(short));
	printf("int���� ����Ʈ ũ�� : %d\n", sizeof(int));
	printf("long���� ����Ʈ ũ�� : %d\n", sizeof(long));
	printf("float���� ����Ʈ ũ�� : %d\n", sizeof(float));
	printf("double���� ����Ʈ ũ�� : %d\n", sizeof(double));

	return 0;
}*/
/*int main(void)
{
	int num1, num2;
	int result;

	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d, %d", &num1, &num2);

	result = num1 + num2;
	printf(" %d + %d = %d\n", num1, num2, num1 + num2);

	result = num1 - num2;
	printf(" %d - %d = %d\n", num1, num2, num1 - num2);

	result = num1 * num2;
	printf(" %d * %d = %d\n", num1, num2, num1*num2);

	result = num1 / num2;
	printf(" %d / %d = %d\n", num1, num2, num1 / num2);

	return 0;
}*/
/*int main(void)
{
	int num;
	int thousands;
	int tens;

	printf("6�ڸ� ������ �Է��ϼ��� : ");
	scanf("%d", &num);

	thousands = num / 1000;
	tens = num % 1000;

	printf("%d %d\n", thousands, tens);

	return 0;
}*/
/*int main(void)
{
	int count;
	int value1, value2;
	float temperature = 10.5f;

	count = 10;
	value1 = ++count;
	printf("value1 = %d,count = %d\n", value1, count);

	count = 10;
	value2 = count++;
	printf("value2 = %d , count = %d\n", value2, count);

	count = 10;
	++count;
	printf("count = %d\n", count);

	count = 10;
	count++;
	printf("count = %d\n", count);

	temperature++;
	printf("temperature = %f\n", temperature);

	return 0;
}*/
/*int main(void)
{
	int a = 10;
	int b = 20;

	printf("a = %d, b = %d\n", a, b);
	printf("a > b = %d\n", a > b);
	printf("a >= b = %d\n", a >= b);
	printf("a < b = %d\n", a < b);
	printf("a <=b = %d\n", a <= b);
	printf("a == b = %d\n", a == b);
	printf("a !=b = %d\n", a != b);

	return 0;
}*/
/*int main(void)
{
	int score = 95;

	printf("90�� �̻� 100�� �����ΰ� ?: %d\n", score >= 90 && score <= 100);

	printf("0�� �Ǵ� 100���ΰ� ? : %d\n", score == 0 || score == 100);

	printf("0���ΰ� ? :%d\n", !score);

	return 0;
}*/
/*int main(void)
{
	int num;

	num = 5;
	printf("num = %d\n", num);

	num += 2;
	printf("num = %d\n", num);

	num *= 2;
	printf("num = %d\n", num);

	num |= 3;
	printf("num = %d\n", num);

	num <<= 2;
	printf("num = %d\n", num);

	return 0;
}*/
/*int main(void)
{
	int a, b;
	int min, max;

	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);

	min = a < b ? a : b;
	max = a < b ? b : a;

	printf("min = %d\n max = %d\n", min, max);

	return 0;

}*/













