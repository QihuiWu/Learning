#define _CRT_SECURE_NO_WARNINGS 1

///* intconv.c -- һЩ��ƥ�������ת�� */
//#include <stdio.h>
//#define PAGES 336
//#define WORDS 65618
//int main(void)
//{
//	short num = PAGES;
//	short mnum = -PAGES;
//
//	printf("num as short and unsigned short: %hd %hu\n", num, num);
//	printf("-num as short and unsiged short: %hd %hu\n", mnum, mnum);
//	printf("num as int and char: %d %c\n", num, num);
//	printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);
//
//	return 0;
//}
///* prntval.c -- printf() �ķ���ֵ */
//#include <stdio.h>
//int main(void)
//{
//	int bph2o = 212;
//	int rv;
//
//	rv = printf("%d F is water's boiling point.\n", bph2o);
//	printf("The printf() function printed %d characters.\n",
//		rv);
//	return 0;
//}
///* longstrg.c --��ӡ�ϳ����ַ��� */
//#include <stdio.h>
//int main(void)
//{
//	printf("Here's one way to print a");
//	printf("long string.\n");
//	printf("Here's another way to print a \
//		   long string.\n");
//	printf("Here's the newest way to print a "
//		"long string.\n"); /* ANSI C */
//
//	return 0;
//}
//// input.c -- ��ʱʹ��&
//#include <stdio.h>
//int main(void)
//{
//	int age;
//	float assets;
//	char pet[30];
//
//	printf("Enter your age, assets, and favorite pet.\n");
//	scanf("%d %f", &age, &assets);
//	scanf("%s", pet);
//	printf("%d $%.2f %s\n", age, assets, pet);
//
//	return 0;
//}
///* varwid.c -- ʹ�ñ������ֶ� */
//#include <stdio.h>
//int main(void)
//{
//	unsigned width, precision;
//	int number = 256;
//	double weight = 242.5;
//
//	printf("Enter a field width:\n");
//	scanf("%d", &width);
//	printf("The number is :%*d:\n", width, number);
//	printf("Now enter a width and a precision:\n");
//	scanf("%d %d", &width, &precision);
//	printf("Weight = %*.*f\n", width, precision, weight);
//	printf("Done!\n");
//
//	return 0;
//}
///* skiptwo.c -- ���������е�ǰ�������� */
//#include <stdio.h>
//int main(void)
//{
//	int n;
//
//	printf("Please enter three intefers:\n");
//	scanf("%*d %*d %d", &n);
//	printf("The last interger was %d\n", n);
//
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	char name1[20], name2[20];
//	printf("Please enter your name1>:");
//	scanf("%s", &name1);
//	printf("Please enter your name2>:");
//	scanf("%s", &name2);
//	printf("%s,%s", name1, name2);
//	
//
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	char name1[20],name2[20];
//	printf("Please enter your first name>:");
//	scanf("%s", name1);
//	printf("Please enter your scend name>:");
//	scanf("%s", name2);
//
//	printf("\"%s\"", name1);
//	printf("\"%20s\"", name1);
//	printf("\"%-20s\"", name1);
//	printf("\"%*s\"", strlen(name1) + 3, name1);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	float a = 3.14;
//	scanf("%f", &a);
//	printf("%f, %e", a, a);
//
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	char name[20];
//	float tall;
//	printf("Please enter your name>:");
//	scanf("%s", &name);
//	printf("Please enter your tall>:");
//	scanf("%f", &tall);
//	printf("%s, you are %f feet tall\n", name, tall);
//
//
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	float speed, size;
//	printf("Please enter the speed, size>:");
//	scanf("%f %f", &speed, &size);
//	printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, size);
//	printf("downloads in %.2f seconds.", size / speed);
//
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	char name1[20], name2[20];
//	printf("Please enter your first name>:");
//	scanf("%s", &name1);
//	printf("Please enter your last name>:");
//	scanf("%s", &name2);
//	printf("%s %s\n", name2, name1);
//	printf("%-*d %-*d", strlen(name2), strlen(name2), strlen(name1), strlen(name1));
//
//	return 0;
//}
//#include <stdio.h>
//#include <float.h>
//
//int main(void)
//{
//	float f_value = 1.0 / 3.0;
//	double d_value = 1.0 / 3.0;
//
//	printf("1.0 / 3.0 display 6 decimal places��\n");
//	printf("f_value = %.6f\nd_value = %.6lf\n", f_value, d_value);
//	printf("\n1.0 / 3.0 display 12 decimal places��\n");
//	printf("f_value = %.12f\nd_value = %.12lf\n", f_value, d_value);
//	printf("\n1.0 / 3.0 display 16 decimal places��\n");
//	printf("f_value = %.16f\nd_value = %.16lf\n", f_value, d_value);
//	printf("\nfloat and double maximum significant digits:\n");
//	printf("FLT_DIG = %d, DBL_DIG = %d\n", FLT_DIG, DBL_DIG);
//	//��FLTDIG����float��Чʮ��������λ����
//	//��DBL_DIG����double��Чʮ��������λ��;
//
//	return 0;
//}
////��������������������������������
////��Ȩ����������ΪCSDN������MZZDX����ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
////ԭ�����ӣ�https ://blog.csdn.net/m0_46181359/article/details/105289283
//#include <stdio.h>
//#define JTL 3.785
//#define YTK 1.609
//
//int main(void)
//{
//	float lc, qy, lc2, qy2;
//	printf("Please enter the lc and qy>:");
//	scanf("%f %f", &lc,&qy);
//	printf("yl/jl = %f", lc / qy);
//	lc2 = lc / YTK;
//	qy2 = JTL * qy;
//	printf("s/100gl = %f", 100 * qy2 / lc2);
//
////	return 0;
////}
///* shoes1.c -- ��Ь��ת����Ӣ�� */
//#include <stdio.h>
//#define ADJUST 7.31
//int main(void)
//{
//	const double SCALE = 0.333; // const ���� 
//	double shoe, foot;
//
//	shoe = 9.0;
//	foot = SCALE * shoe + ADJUST;
//	printf("Shoe size (men's)   foot length\n");
//	printf("%10.1f %15.2f inches\n", shoe, foot);
//
//	return 0;
//}
/* shoed2.c -- ��������ͬЬ���Ӧ�Ľų� */
#include <stdio.h>
#define ADJUST 7.31
int main(void)
{
	const double SCALE = 0.333;
	double shoe, foot;

	printf("Shoe size (men's)   foot length\n");
	shoe = 3.0;
	while (shoe < 18.5)
	{
		foot = SCALE * shoe + ADJUST;
		printf("%10.1f %15.2f inches\n", shoe, foot);
		shoe = shoe + 1.0;
	}
	printf("If the shoe fits, wear it.\n");

	return 0;
}