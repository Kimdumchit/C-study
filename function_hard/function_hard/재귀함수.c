#include <stdio.h>

int GetGCD(int m, int n);

int main(void)
{
	int x, y;

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d %d", &x, &y);
	printf("%d�� %d�� �ִ������� %d�Դϴ�.\n", x, y, GetGCD(x, y));

	return 0;
}

int GetGCD(int m, int n)
{
	if (m % n == 0)
		return n;

	return GetGCD(n, m % n);
}