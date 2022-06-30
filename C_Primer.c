#define _CRT_SECURE_NO_WARNINGS 1

//
///* platium.c -- your weight in platium */
//#include <stdio.h>
//int main(void)
//{
//	float weight;   /* 你的体重   */
//	float value;   /* 相等重量的白金的价值   */
//
//	printf("Are you worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pounds: ");
//
//	/* 获取用户的输入   */
//	scanf("%f", &weight);
//	/* 假设白金的价格的$1700   */
//	/* 14.5833用于把英镑转换成金 */
//	value = 1700.0 * weight * 14.5833;
//	printf("Your weight in platinum is worth $%.2f.\n", value);
//	printf("you are easily worth that! If platinum prices drop,\n");
//	printf("eat more to maintain your value.\n");
//
//	return 0;
//}

///* print1.c -演示printf()的一些特性 */
//#include <stdio.h>
//int main(void)
//{
//	int ten = 10;
//	int two = 2;
//
//	printf("Doing it right: ");
//	printf("%d minus %d is %d\n", ten, 2, ten - two);
//	printf("Doing it wrong: ");
//	printf("%d minus %d is %d\n", ten);
//
//	return 0;
//}

///* bases.c--以十进制、八进制、十六进制打印十进制数100 */
//#include <stdio.h>
//int main(void)
//{
//	int x = 100;
//
//	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
//	printf("dec = %d; octal = %#o; hex = %#x\n = %#x\n", x, x, x);
//
//	return 0;
//}

///* toobig.c-- 超出系统允许的最大int值*/
//#include <stdio.h>
//int main(void)
//{
//	int i = 2147483647;
//	unsigned int j = 4294967295;
//
//	printf("%d %d %d\n", i, i + 1, i + 2);
//	printf("%u %u %u\n", j, j + 1, j + 2);
//
//	return 0;
//}
///* print2.c--更多printf()的特性 */
//#include <stdio.h>
//int main(void)
//{
//	unsigned int un = 3000000000; /* int 为 32 位和 short 为 16 位的系统 */
//	short end = 200;
//	long big = 65537;
//	long long verybig = 12345678908642;
//	printf("un = %u and not %d\n", un, un);
//	printf("end = %hd and %d\n", end, end);
//	printf("big = %ld and not %hd\n", big, big);
//	printf("verybig= %lld and not %ld\n", big, big);
//
//	return 0;
//}
