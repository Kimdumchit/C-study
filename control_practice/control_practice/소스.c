#include <stdio.h>

/*int main(void)
{
	int score;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);

	if (score < 60)
		printf("%d ���� ���հ��Դϴ�.\n", score);
	else
		printf("%d ���� �հ��Դϴ�.\n", score);

	return 0;
}*/

/*int main(void)
{
	int score;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);

	if (score >= 90)
		printf("%d���� A��� �Դϴ�.\n",score);
	else if (score >= 80)
		printf("%d���� B��� �Դϴ�.\n",score);
	else if (score >= 70)
		printf("%d���� C��� �Դϴ�.\n",score);
	else if (score >= 60)
		printf("%d���� D��� �Դϴ�.\n",score);
	else
		printf("%d���� F��� �Դϴ�.\n",score);

	return 0;
}*/
/*int main(void)
{
	int score;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);

	if (score < 0 || score>100)
		printf("�߸� �Է��ϼ̽��ϴ�.");
	else if (score >= 90)
		printf("A���");
	else if (score >= 80)
		printf("B���");
	else if (score >= 70)
		printf("C���");
	else if (score >= 60)
		printf("D���");
	else
		printf("F���");

	return 0;
}*/
int main(void)
{
	int a, b;
	char op;

	printf("������ �Է��ϼ��� : ");
	scanf("%d %c %d ", &a, &op, &b);

	switch (op)
	{
	case '+':
		printf("%d + %d = %d\n", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d\n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d\n", a, b, a*b);
		break;
	case '/':
		printf("%d / %d = %d\n", a, b, a / b);
		break;
	default:
		printf("����� �� �����ϴ�.\n");
		break;

	}
	return 0;
}