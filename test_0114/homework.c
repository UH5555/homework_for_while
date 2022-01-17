#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////100-200之间的素数；（案1）
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//试除法
//		for(n = 2; n <= i - 1;n++)
//		{
//			if (i % n == 0)
//			{
//				break;
//			}
//		}
//		if (n == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count=%d", count);
//	return 0;
//}

#include <math.h>
////100-200之间的素数；（案2）
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//试除法
//		for(n = 2; n <=sqrt(i); n++)
//		{
//			if (i % n == 0)
//			{
//				break;
//			}
//		}
//		if (n > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count=%d", count);
//	return 0;
//}

////打印1000-2000年之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}//案1
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}//案2
//	}
//	printf("\n count=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//此处为赋值，所以i一直被赋值为5，然后i++为6
//			printf("%d ", i);
//	}
//	return 0;
//}//答案为5死循环

//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:b = 30;
//	case 2:b = 20;
//	case 3:b = 16;
//	default:b = 0;
//	}
//	return b;
//}//则func(1)=0；

//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default:printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}//输出为hellothird

////写三个数，让他们从大小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//}

////打印1-100之间三的倍数的数
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}

////求两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	while (a % b)//非0为真
//	{
//		int r = a % b;
//		a = b;
//		b = r;
//	}
//	printf("%d\n", b);
//	return 0;
//}