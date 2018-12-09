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
	struct product prd2 = { "생수2L",9500,20 };

	prd1.price = 15000;
	prd1.stock = 30;
	strcpy(prd1.name, "커피믹스");

	printf("%s : %d원 , 재고량 : %d\n",prd1.name,prd1.price,prd1.stock);
	printf("%s : %d원 , 재고량 : %d\n", prd2.name, prd2.price, prd2.stock);

	return 0;
}*/

/*struct point {
	int x, y;
};
int main(void)
{
	struct point pt1, pt2;

	printf("pt1의 좌표를 입력하세요 : ");
	scanf("%d,%d", &pt1.x, &pt1.y);

	printf("pt2의 좌표를 입력하세요 : ");
	scanf("%d,%d", &pt2.x, &pt2.y);

	if (pt1.x == pt2.x && pt1.y == pt2.y)
		printf("같다.");
	else
		printf("다르다.");

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

	printf("pt1의 좌표 : %d, %d\n", pt1.x, pt1.y);
	printf("pt3의 좌표 : %d ,%d\n", pt3.x, pt3.y);
	if (pt1.x == pt3.x && pt1.y == pt3.y)
		printf("pt1과 pt3의 좌표가 같습니다.\n");
	else
		printf("pt1과 pt3의 좌표가 다릅니다.\n");

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

	printf("%d 개의 상품 정보를 입력하세요 . \n", MAX_PRODUCT);
	for (i = 0; i < MAX_PRODUCT; i++)
	{
		printf("상품명 :");
		scanf("%s", prd[i].name);
		printf("가격 , 재고량 :");
		scanf("%d,%d",&prd[i].price,&prd[i].stock)
	}

	



















}


