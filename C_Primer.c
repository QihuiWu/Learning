#define _CRT_SECURE_NO_WARNINGS 1

///* charcode.c-��ʾ�ַ��Ĵ����� */
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//
//	printf("Please enter a character.\n");
//	scanf("%c", &ch); /* �û������ַ� */
//	printf("The code for %c is %d.\n", ch, ch);
//
//	return 0;
//}

///* altnames.c -- ����ֲ���������� */
//#include <stdio.h>
//#include <inttypes.h>
//int main(void)
//{
//	int32_t me32;
//
//	me32 = 45933945;
//	printf("First, assume int32_t is int: ");
//	printf("me32 = %d\n", me32);
//	printf("Next, let's not make any assumptions.\n");
//	printf("Instead, use a \"macro\" from inttypes.h: ");
//	printf("me32 = %" PRId32 "\n", me32);
//
//	return 0;
//}

///* showf_pt.c -- �����ַ�ʽ��ʾfloat���͵�ֵ */
//#include <stdio.h>
//int main(void)
//{
//	float about = 32000.0;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5;
//
//	printf("%f can be written %e\n", about, about);
//	//��һ��Ҫ�������֧��C99�����е��������
//	printf("And it's %a in hexadecimal, powers of 2 notation\n", about);
//	printf("%f can be written %e\n", abet, abet);
//	printf("%Lf can be written %Le\n", dip, dip);
//
//	return 0;
//}
////* typesize.c -- ��ӡ���ʹ�С */
//#include <stdio.h>
//int main(void)
//{
//	/* C99 Ϊ���ʹ�С�ṩ%zdת��˵�� */
//	printf("Type int has a size of %d bytes.\n", sizeof(int));
//	printf("Type char has a size of %d bytes.\n", sizeof(char));
//	printf("Type long has a size of %d bytes.\n", sizeof(long));
//	printf("type long long has a size of %d bytes.\n",
//		sizeof(long long));
//	printf("Type double has a size of %d bytes.\n",
//		sizeof(long double));
//
//	return 0;
//}
///* badcount.c -- ������������ */
//#include <stdio.h>
//int main(void)
//{
//	int n = 4;
//	int m = 5;
//	float f = 7.0f;
//	float g = 8.0f;
//
//	printf("%d\n", n, m);
//	printf("%d %d %d\n", n);
//	printf("%d %d\n", f, g);
//
//	return 0;
//}
/* escape.c -- ʹ��ת������ */
#include <stdio.h>
int main(void)
{
	float salary;

	printf("\aEnter your desired monthly salary:");
	printf(" $_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary,
		salary * 12.0);
	printf("\rGee!\n");

	return 0;
}