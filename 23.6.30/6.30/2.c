#include<stdio.h>
#include<math.h>
int main()
{
	//char a, b, c;
	//a = getchar();
	//b = getchar();
	//c = getchar();
	//putchar(a);
	//putchar(b);
	//putchar(c);
	int x;
	int a, b, c;
	scanf("%d", &x);
	a = x % 10;	
	b = x / 10 % 10;
	c = x / 100;
	if (x == pow(a,3) + pow(b, 3) + pow(c, 3))
	{
		printf("��ˮ�ɻ���");
	}
	else
	{
		printf("����ˮ�ɻ���");
	}
	return 0;
}