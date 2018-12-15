/*#include <stdio.h>
#include <string.h>

struct product {
	char name[20];
	int price;
	int stock;
};

int main(void)
{
	struct product prd1;
	struct product prd2 = { "생수 2L",9500,20 };

	prd1.price = 15000;
	prd1.stock = 30;
	strcpy(prd1.name, "커피믹스");

	printf("%s : %d원, 재고량 : %d\n", prd1.name, prd1.price, prd1.stock);

	printf("%s : %d원, 재고량 : %d\n", prd2.name, prd2.price, prd2.stock);

	return 0;
}*/
/*#include <stdio.h>

struct point {
	int x;
	int y;
};

int main(void)
{
	struct point pt1, pt2;

	printf("pt1의 좌표를 입력하세요 : ");
	scanf("%d %d", &pt1.x, &pt1.y);

	printf("pt2의 좌표를 입력하세요 : ");
	scanf("%d %d", &pt2.x, &pt2.y);

	if (pt1.x == pt2.x && pt1.y == pt2.y)
		printf("두 점의 좌표가 같습니다.");
	else
		printf("두 점의 좌표가 다릅니다.");
	
	return 0;
}*/
/*#include <stdio.h>

struct point {
	int x;
	int y;
};

int main(void)
{
	struct point pt1 = { 10,20 };
	struct point pt2 = { 30,40 };
	struct point pt3 = pt1;
	struct point pt4;

	printf("pt1의 좌표 : %d, %d\n", pt1.x, pt1.y);
	printf("pt3의 좌표 : %d, %d\n", pt3.x, pt3.y);
	if (pt1.x == pt3.x && pt1.y == pt3.y)
		printf("pt1과 pt3의 좌표가 같습니다.\n");
	else
		printf("pt1과 pt3의 좌표가 다릅니다.\n");
	
	pt4 = pt2;

	printf("pt2의 좌표 : %d, %d\n", pt2.x, pt2.y);
	printf("pt4의 좌표 : %d, %d\n", pt4.x, pt4.y);
	if (pt2.x == pt4.x && pt2.y == pt4.y)
		printf("pt2와 pt4의 좌표가 같습니다.\n");
	else
		printf("pt2와 pt4의 좌표가 다릅니다.\n");

	return 0;
}*/
/*#include <stdio.h>
#include <string.h>

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

	printf("%d개의 상품 정보를 입력하세요 : \n", MAX_PRODUCT);
	for (i = 0; i < MAX_PRODUCT; i++)
	{
		printf("상품명 :");
		scanf("%s", &prd[i].name);
		
		printf("가격, 재고량 : ");
		scanf_s("%d , %d", &prd[i].price, &prd[i].stock);
		
	}
	printf("\n상품명                    가격        재고량\n");
	for (i = 0; i < MAX_PRODUCT; i++)
	{
		printf("%-20s %8d        %10d", prd[i].name, prd[i].price, prd[i].stock);
		if (prd[i].stock < 10)
			printf("==> 재고 부족! 주문 필요!\n");
		else
			printf("\n");
	}
	
	return 0;
}*/
/*#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

double GetDistance(struct point*p1, struct point*p2);

int main(void)
{
	struct point pt1 = { 0,0 };
	struct point pt2 = { 10,10 };
	double distance;

	distance = GetDistance(&pt1, &pt2);
	printf("두 점 사이의 거리 : %5.2f\n", distance);
	
	return 0;
}

double GetDistance(struct point *p1, struct point *p2)
{
	int dx = p2->x - p1->x;
	int dy = p2->y - p1->y;

	return sqrt(dx*dx + dy * dy);
}*/
