#include <string.h>
#include <stdio.h>
/*struct test {
	char ch;
	short s;
	int i;
	double d;
};

int main(void)
{
	printf("%d\n", sizeof(struct test));
		
		
	return 0;

}*/
/*struct product {
	char name[20];
	int price;
	int stock;
};

int main(void)
{
	struct product prd1;
	struct product prd2 = { "����2L",9500,20 };

	prd1.price = 15000;
	prd1.stock = 30;
	strcpy(prd1.name, "Ŀ�ǹͽ�");

	printf("%s : %d�� , ��� : %d\n",prd1.name,prd1.price,prd1.stock);
	printf("%s : %d�� , ��� : %d\n", prd2.name, prd2.price, prd2.stock);

	return 0;
}*/

/*struct point {
	int x, y;
};
int main(void)
{
	struct point pt1, pt2;

	printf("pt1�� ��ǥ�� �Է��ϼ��� : ");
	scanf("%d,%d", &pt1.x, &pt1.y);

	printf("pt2�� ��ǥ�� �Է��ϼ��� : ");
	scanf("%d,%d", &pt2.x, &pt2.y);

	if (pt1.x == pt2.x && pt1.y == pt2.y)
		printf("����.");
	else
		printf("�ٸ���.");

	return 0;

}*/
/*struct point {
	int x, y;
};

int main(void)
{
	struct point pt1 = { 10,20 };
	struct point pt2 = { 30,40 };
	struct point pt3 = pt1;
	struct point pt4;

	printf("pt1�� ��ǥ : %d, %d\n", pt1.x, pt1.y);
	printf("pt3�� ��ǥ : %d ,%d\n", pt3.x, pt3.y);
	if (pt1.x == pt3.x && pt1.y == pt3.y)
		printf("pt1�� pt3�� ��ǥ�� �����ϴ�.\n");
	else
		printf("pt1�� pt3�� ��ǥ�� �ٸ��ϴ�.\n");

	pt4 = pt2;

	return 0;
}*/

#define MAX_PRODUCT 5

struct product {
	char name[20];
	int price;
	int stock;
};

int main(void)
{
	struct product prd[MAX_PRODUCT];
	int i;

	printf("%d ���� ��ǰ ������ �Է��ϼ��� . \n", MAX_PRODUCT);
	for (i = 0; i < MAX_PRODUCT; i++)
	{
		printf("��ǰ�� :");
		scanf("%s", prd[i].name);
		printf("���� , ��� :");
		scanf("%d,%d",&prd[i].price,&prd[i].stock)
	}

	



















}


