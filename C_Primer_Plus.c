#define _CRT_SECURE_NO_WARNINGS 1

///* golf.c -- �߶���������Ʒֿ� */
//int main(void)
//{
//	int jane, tarzan, cheeta;
//
//	cheeta = tarzan = jane = 68;
//	printf("               cheeta   tarzan   jane\n");
//	printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);
//
//	return 0;
//}
///* square.c -- ����1-20��ƽ�� */
//#include <stdio.h>
//int main(void)
//{
//	int num = 1;
//
//	while (num < 21)
//	{
//		printf("%-4d %-6d\n", num, num * num);
//		num = num + 1;
//	}
//
//	return 0;
//}
/* wheat.c -- ָ������ */
#include <stdio.h>
#define SQUARES 64
int main(void)
{
	const double CROP = 2E16;
	double current, total;
	int count = 1;

	printf("square      grains      total      ");
	printf("fraction of \n");
	printf("           added       grains      ");
	total = current = 1.0;
	printf("%4d %13.2e %12.2e %12.2e\n", count, current,
		total, total / CROP);
	while (count < SQUARES)
	{
		count = count + 1;
		current = 2.0 * current;
		total = total + current;
		printf("%4d %13.2e %12.2e %12.2e\n", count, current,
			total, total / CROP);
	}
	printf("That's all.\n");
	return 0;
}