#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//	char ch;
//
//	printf("Please enter a upper letter:");
//	scanf("%c", &ch);
//
//	int length = ch - 'A';
//	//ѭ��������
//	printf("The pyramid of %c is:\n", ch);
//	for (i = 0; i <= length; i++)
//	{
//		char t = 'A' - 1;
//		for (j = 0; j < length - i; j++)
//		{
//			printf(" ");
//		}
//		//���������ո�����
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c", ++t);
//		}
//		//�����Ǵ�ӡ������ĸ��
//		for (j = 0; j < i; j++)
//		{
//			printf("%c", --t);
//		}
//		//�����Ǵ�ӡ�ݼ���ĸ
//		printf("\n");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int i, i2, i3;
//	int min, max;
//	printf("Please enter the min and max numble:");
//	scanf("%d %d", &min, &max);
//	for (i = min; i <= max; i++)
//	{
//		i2 = i * i;
//		i3 = i * i *i;
//		printf("%d %d %d\n", i, i2, i3);
//	}
//	return 0;
//}
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char arr[20];
	scanf("%s", arr);
	int len = strlen(arr) - 1;
	for (i = len; i >= 0; i--)
	{
		printf("%c", arr[i]);
	}

	return 0;
}