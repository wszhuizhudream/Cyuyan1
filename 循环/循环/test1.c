////1.练习：通过循环将字符串逐渐输出
//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!";
//	char arr2[] = "################";
//	printf("%s\n", arr2);
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	for (left = 0, right = strlen(arr1) - 1; left <= right; left++, right--)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//	}
//	system("pause");
//	return 0;
//}

////2.模拟用户登录，只有三次机会。若三次机会都没有成功，则退出程序
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char psw[10] = "";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：\n");//注意在这个地方由于每次都要进行密码输入，
//		                         //所以需要将这个写在循环里
//		scanf("%s", psw);
//		if (strcmp(psw, "12345") == 0)
//			break;
//	}
//	if (i == 3)
//	{
//		printf("失败\n");
//	}
//	else
//	{
//		printf("登录成功\n");
//	}
//	system("pause");
//	return 0;
//}

////3.折半查找的实现
//折半查找最重要的是分为三种，左区间、右区间、中间值
//知道循环的结束条件
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
//	int left = 0;//最左边下标
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;//最右边下标
//	int key = 4;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (right + left) / 2;
//		if (key < mid)
//		{
//			right = mid - 1;
//		}
//		else if (key>mid)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left <= right)
//	{
//		printf("查找成功,下标为：%d\n",mid-1);
//	}
//	else
//	{
//		printf("查找失败\n");
//	}
//	system("pause");
//	return 0;
//}

//4.猜数字游戏
//猜的这个数字在[1,100]之间
//核心：折半查找
#define _CR_SECURE_NO_WARNIGINS
#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("###############################");
	printf("####        1.play         ####");
	printf("####        0.退出         ####");
	printf("###############################");
}
void game(int key)
{

}
int main()
{
	 
	system("pause");
	return 0;
}