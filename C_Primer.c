#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <float.h>
//#include <limits.h>
//
//int main(void)
//{
//	int big_int = 2147483647;
//	//↑signed int最大值是2的31次方减1;
//	float big_float = 3.4e38;
//	//↑float最大值一般是3.4E38;
//	float small_float = 10.0 / 3;
//	//↑float有效位数是6位;
//	printf("The big int data is %d.\n", big_int + 1);
//	//↑整型数据最大值+1会造成越界,结果是-2147493648;
//	printf("The big float data is %f.\n", big_float * 10);
//	//↑float最大值*10会造成越界,结果是inf;
//	printf("The big bit float data is %f.\n", small_float);
//	//↑float最大有效精度;
//	printf("The max float data is %f.\n", FLT_MAX);
//	//↑float类型最大值;
//	printf("The max int data is %ld.\n", INT_MAX);
//	//↑int类型最大值;
//
//	return 0;
//}
////————————————————
////版权声明：本文为CSDN博主「MZZDX」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
////原文链接：https ://blog.csdn.net/m0_46181359/article/details/105280
////
////#include <stdio.h>
////
////int main(void)
////{
////	int a = 0;
////	scanf("%d", &a);
////	printf("%c\n", a);
////
////	return 0;
////}
//#include <stdio.h>
//
//int main(void)
//{
//	printf("\a");
//	printf("Startled by the sudden sound, Sally shouted,\n");
//	printf("\"By the Great Pumplin, what was that!\"\n");
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	float a = 0;
//
//	scanf("%f", &a);
//	printf("Enter a floating-point value: %f\n", a);
//	printf("fixed-point notation: %.6f\n", a);
//	printf("exponential notation: %.6e\n", a);
//	printf("p notation: %.2a\n", a);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int age = 0;
//	printf("Please enter your age>:");
//	scanf("%d", &age);
//	printf("You are %d years old, or %d s", age, 3.156 * 10000000 * age);
//
//	return 0;
////}
//#include <stdio.h>
//#define SW 3.0e-23
//
//int main(void)
//{
//	int kt = 0;
//	printf("Please enter the kt>:\n");
//	scanf("%d", &kt);
//	printf("%d kt include %e water\n", kt, 950 * kt / 3.0e-23);
//
//	return 0;
//}

//#include <stdio.h>
//#define MASS_PER_MOLE 3.0e-23
//#define MASS_PER_QUART 950
//
//int main(void)
//{
//	double quart, molecules;
//
//	printf("Please enter a quart for water:");
//	scanf("%lf", &quart);
//	//1夸脱水大约是950克;
//	//1个水分子质量约为3.0 * 10^(-23)克;
//	molecules = quart * MASS_PER_QUART / MASS_PER_MOLE;
//	printf("%g quart water includes %e water molecules.\n", quart, molecules);
//
//	return 0;
//}
////\\————————————————
////原文链接：https ://blog.csdn.net/m0_46181359/article/details/105280579
//#include <stdio.h>
//
//int main(void)
//{
//	float yc = 0;
//
//	printf("enter your yc please>:");
//	scanf("%f", &yc);
//	printf("%f yc means %f cm", yc, 2.54 * yc);
//
//	return 0;
//}
#include <stdio.h>

int main(void)
{
	float pt, bei, gs, ts, cs;
	printf("please enter bei>:"); 
	scanf("%f", &bei);
	pt = 2 * bei;
	gs = bei / 8;
	ts = gs / 2;
	cs = ts / 3;
	printf("%f bei means %f pt, %f gs, %f ts, %f cs\n", bei, pt, gs, ts, cs);

	return 0;
}