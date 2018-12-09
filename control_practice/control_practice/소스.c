#include <stdio.h>

/*int main(void)
{
	int score;

	printf("점수를 입력하세요 : ");
	scanf("%d", &score);

	if (score < 60)
		printf("%d 점은 불합격입니다.\n", score);
	else
		printf("%d 점은 합격입니다.\n", score);

	return 0;
}*/

/*int main(void)
{
	int score;

	printf("점수를 입력하세요 : ");
	scanf("%d", &score);

	if (score >= 90)
		printf("%d점은 A등급 입니다.\n",score);
	else if (score >= 80)
		printf("%d점은 B등급 입니다.\n",score);
	else if (score >= 70)
		printf("%d점은 C등급 입니다.\n",score);
	else if (score >= 60)
		printf("%d점은 D등급 입니다.\n",score);
	else
		printf("%d점은 F등급 입니다.\n",score);

	return 0;
}*/
/*int main(void)
{
	int score;

	printf("점수를 입력하세요 : ");
	scanf("%d", &score);

	if (score < 0 || score>100)
		printf("잘못 입력하셨습니다.");
	else if (score >= 90)
		printf("A등급");
	else if (score >= 80)
		printf("B등급");
	else if (score >= 70)
		printf("C등급");
	else if (score >= 60)
		printf("D등급");
	else
		printf("F등급");

	return 0;
}*/
int main(void)
{
	int a, b;
	char op;

	printf("수식을 입력하세요 : ");
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
		printf("계산할 수 없습니다.\n");
		break;

	}
	return 0;
}