#include<stdio.h>
void main()
{
	int a, b, c, d, e, f;
	printf("������һ����λ������");
	scanf_s("%d", &a);
	b = a / 10000;
	c = a % 10000 / 1000;
	d = a % 1000 / 100;
	e = a % 100 / 10;
	f = a % 10;
	if (b == f&&c == e)
		printf("�����ǻ���\n");
	else
		printf("�������ǻ���\n");
}