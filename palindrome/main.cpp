#include<stdio.h>
void main()
{
	int a, b, c, d, e, f;
	printf("请输入一个五位整数：");
	scanf_s("%d", &a);
	b = a / 10000;
	c = a % 10000 / 1000;
	d = a % 1000 / 100;
	e = a % 100 / 10;
	f = a % 10;
	if (b == f&&c == e)
		printf("次数是回数\n");
	else
		printf("次数不是回数\n");
}