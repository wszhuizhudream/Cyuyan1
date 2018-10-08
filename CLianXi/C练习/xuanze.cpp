//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	if (b == 2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i = i + 1;
//	}
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char psw[10] = "";
	int i = 0;
	for (i = 0; i < 3; ++i)
	{
		printf("请输入密码：\n");
		scanf("%s", psw);
		if (strcmp(psw, "123456") == 0)
			break;//不管什么情况最后都要结束整个程序
	}
	if (i == 3)
	{
		printf("exit\n");
	}
	else
	{
		printf("log in\n");
	}
	system("pause");
	return 0;
}
