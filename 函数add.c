/*Çóì³²¨ÄÇÆõ*/
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include"º¯Êıadd.h"
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = 0;
//	ret=Fib(a);
//	printf("%d\n", ret);
//	return 0;
//}
//
//int Fib(int a)
//{
//	if (a <= 2)
//		return 1;
//	else
//		return Fib(a - 1) + Fib(a - 2);
//}
//#include<stdio.h>
//int Funk(int n,int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		 return n * Funk(n,k-1);
//	}
//}
//int main()
//{
//	int n=0;
//	scanf("%d", &n);
//	
//	int k = 0;
//	scanf("%d", &k);
//	int ret = Funk(n, k);
//		printf("%d\n", ret);
//		system("pause");
//	return 0;
//}
//#include<stdio.h>
//int DigitSum(n)
//{
//	if (n / 10 == 0)
//	{
//		return n % 10;
//	}
//	return DigitSum(n / 10) + DigitSum(n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int mystrlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int len = mystrlen(str);
//	char  tmp = *str;
//		* str = *(str + len - 1);
//	    *(str + len - 1)='\0';
//		if (mystrlen(str + 1) > 1)
//		{
//			reverse_string(str + 1);
//		}
//		*(str + len - 1) = tmp;
//
//}
//int main()
//{
//	
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "ÁõÓîĞù+Ò¦³¤À¤";
//	size_t len = strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}

//size_t mystrlen(char* str)
//{
//	size_t count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//size_t mystrlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + mystrlen(str + 1);
//}
//
//int main()
//{
//	char arr[] = "ÁõÓîĞù+Ò¦³¤À¤";
//	size_t len = mystrlen(arr);
//	printf("%zd\n", len);
//	return 0;
//	
//}
//int Fac(n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return  n * Fac(n - 1);
//}

//int Fac(n)
//{
//	int i = 0;
//	int r = 1;
//	for (i = 1; i <= n; i++)
//	{
//		r = r * i;
//	}
//	return r;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//1234
//
//	Print(num);
//
//	return 0;
//}
int main()
{
    int arr[] = { 1,2,(3,4),5 };
    printf("%d\n", sizeof(arr));
    return 0;
}