////1.��ϰ��ͨ��ѭ�����ַ��������
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

////2.ģ���û���¼��ֻ�����λ��ᡣ�����λ��ᶼû�гɹ������˳�����
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
//		printf("���������룺\n");//ע��������ط�����ÿ�ζ�Ҫ�����������룬
//		                         //������Ҫ�����д��ѭ����
//		scanf("%s", psw);
//		if (strcmp(psw, "12345") == 0)
//			break;
//	}
//	if (i == 3)
//	{
//		printf("ʧ��\n");
//	}
//	else
//	{
//		printf("��¼�ɹ�\n");
//	}
//	system("pause");
//	return 0;
//}

////3.�۰���ҵ�ʵ��
//�۰��������Ҫ���Ƿ�Ϊ���֣������䡢�����䡢�м�ֵ
//֪��ѭ���Ľ�������
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
//	int left = 0;//������±�
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;//���ұ��±�
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
//		printf("���ҳɹ�,�±�Ϊ��%d\n",mid-1);
//	}
//	else
//	{
//		printf("����ʧ��\n");
//	}
//	system("pause");
//	return 0;
//}

//4.��������Ϸ
//�µ����������[1,100]֮��
//���ģ��۰����
#define _CR_SECURE_NO_WARNIGINS
#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("###############################");
	printf("####        1.play         ####");
	printf("####        0.�˳�         ####");
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